import 'package:flutter_blue/flutter_blue.dart';
import 'package:get/get.dart';
import 'dart:async';

import 'package:unity_project/model/speed_model.dart';
import 'package:unity_project/pages/bluetooth_detail_page.dart';

const double pi = 3.1415926535897932;
const UINT16_MAX = 65536; // 2^16
const UINT32_MAX = 4294967296; // 2^32

class BluetoothController extends GetxController {
  final double pi = 3.1415926535897932;
  final serviceUUID = "00001816-0000-1000-8000-00805f9b34fb";
  final speedCharacteristicUUID = "00002a5b-0000-1000-8000-00805f9b34fb";
  final heartCharacteristicUUID = '00002a37-0000-1000-8000-00805f9b34fb';
  final batteryCharacteristicUUID = "00002a19-0000-1000-8000-00805f9b34fb";

  RxList<List<int>> sensorData = <List<int>>[].obs;

  bool isloading = false;
  Rx<bool> _isScanning = false.obs;
  bool get isScanning => _isScanning.value;
  set isScanning(bool scanning) => _isScanning.value = scanning;
  bool isConnecting = false;

  FlutterBlue flutterBlue = FlutterBlue.instance;
  StreamSubscription<List<ScanResult>>? subscription;

  // RxList<ScanResult> scanList = <ScanResult>[].obs;
  RxSet<ScanResult> scanList = <ScanResult>{}.obs;

  Rxn<SpeedModel> speedStream = Rxn<SpeedModel>();

  RxnDouble wheelVec = RxnDouble(0.0);
  RxnDouble prevWheelVec = RxnDouble(0.0);
  RxnDouble wheelVeckm = RxnDouble(0.0);
  double resultKm = 0;
  double angle = 0.0;

  RxInt battery = 0.obs;
  @override
  void onInit() {
    speedStream.stream.reduce((prevModel, model) {
      // resultData?.add(analyzeSpeed(prevModel!, model!));
      analyzeSpeed(prevModel, model);
      return model;
    });
    super.onInit();
  }

  @override
  void dispose() {
    subscription?.cancel();
    super.dispose();
  }

  void scanToggle() {
    isScanning ? scanStop() : scanStart();
  }

  void scanStart() {
    if (!isScanning) {
      isScanning = !isScanning;
      flutterBlue.startScan();

      subscription =
          flutterBlue.scanResults.listen((results) => scanList.addAll(results));
    }
  }

  void scanStop() {
    if (isScanning) {
      isScanning = false;
      flutterBlue.stopScan();
    }
  }

  Future<void> connectService(BluetoothDevice device) async {
    if (!isConnecting) {
      await connectDevice(device);

      List<BluetoothService> serviceList = await device.discoverServices();
      subscription?.cancel();

      //전체 characteristicList 가져오기
      Iterable<BluetoothCharacteristic> characteristicList =
          findCharacteristicList(serviceList);

      //Speed Characteristic 연결
      connectCharacteristic(
          characteristicList: characteristicList,
          stream: speedStream,
          characteristicUUID: speedCharacteristicUUID,
          toModel: SpeedModel.fromHex);

      if (isConnecting) {
        //Return을 DataResult로 해서 성공이면 화면에서 offNamed를 하게 하자.
        Get.offNamed(
          BluetoothDetailPage.routeName,
          arguments: null,
        );
      }
    } else {
      await disconnectDevice(device);
    }
  }

  void connectCharacteristic(
      {required Iterable<BluetoothCharacteristic> characteristicList,
      required Rxn<SpeedModel> stream,
      required String characteristicUUID,
      required Function toModel}) async {
    BluetoothCharacteristic speedCharacteristic = await getCharacteristic(
      characteristicList: characteristicList,
      characteristicUUID: characteristicUUID,
    );
    stream.bindStream(getStream<SpeedModel>(
        characteristic: speedCharacteristic, toModel: SpeedModel.fromHex));
    // stream.bindStream(speedCharacteristic.value.transform(
    //     StreamTransformer<List<int>, SpeedModel>.fromHandlers(
    //         handleData: (hexList, sink) {
    //   sink.add(toModel(hexList));
    // })));
  }

  Iterable<BluetoothCharacteristic> findCharacteristicList(
      List<BluetoothService> serviceList) {
    return serviceList
        .where((e) => e.uuid.toString() == serviceUUID)
        .expand((e) => e.characteristics);
  }

  Future<BluetoothCharacteristic> getCharacteristic(
      {required Iterable<BluetoothCharacteristic> characteristicList,
      required String? characteristicUUID}) async {
    BluetoothCharacteristic characteristic = characteristicList
        .firstWhere((e) => e.uuid.toString() == characteristicUUID);

    await characteristic.setNotifyValue(true);
    return characteristic;
  }

  Stream<T> getStream<T>(
      {required BluetoothCharacteristic characteristic,
      required Function toModel}) {
    late Stream<T> stream;
    stream = characteristic.value.transform(
        StreamTransformer<List<int>, T>.fromHandlers(
            handleData: (hexList, sink) {
      sink.add(toModel(hexList));
    }));

    return stream;
  }

  //speedStream listen에 넣어주자.
  double analyzeSpeed(SpeedModel? prevModel, SpeedModel? currentModel) {
    if (prevModel == null || currentModel == null) return 0.0;

    int revDiff = calculateDiff(prevModel.wheelRev, currentModel.wheelRev);
    double latencyDifftoDouble =
        calculateLatency(prevModel.wheelLatencyMs, currentModel.wheelLatencyMs);

    prevWheelVec.value = wheelVec.value;

    if (revDiff == 0 || latencyDifftoDouble == 0) {
      wheelVec.value = 0.0;
      wheelVeckm.value = 0;
      return 0.0;
    }

    wheelVec.value =
        (revDiff / latencyDifftoDouble) * 2 * pi * 0.3; // M/s로 거리 나옴.
    wheelVeckm.value = wheelVec.value! * 3.6; //km
    print("analyzeSpeed prev = ${prevWheelVec.value} curr = ${wheelVec.value}");
    return wheelVeckm.value!;
  }

  int calculateDiff(int prevDiff, int currentDiff) {
    int revDiff = currentDiff - prevDiff;
    if (revDiff < 0) revDiff += UINT16_MAX - prevDiff;
    return revDiff;
  }

  double calculateLatency(int prevLatencyMs, int currentLatencyMs) {
    int latencyDifftoInt = currentLatencyMs - prevLatencyMs;
    if (latencyDifftoInt < 0) {
      latencyDifftoInt += currentLatencyMs + (UINT16_MAX - prevLatencyMs);
      return latencyDifftoInt / 1024;
    } else {
      return latencyDifftoInt / 1024;
    }
  }

  void wheelMS(int data) {}
  void getWheelRevAndMs() {}
  void getBattery() {}

  Future<void> connectDevice(BluetoothDevice device) async {
    await device.connect();
    isConnecting = true;
  }

  Future<void> disconnectDevice(BluetoothDevice device) async {
    await device.disconnect();
    isConnecting = false;
  }
}
