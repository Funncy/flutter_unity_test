import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:unity_project/controller/bluetooth_controller.dart';
import 'package:unity_project/model/speed_model.dart';
import 'package:unity_project/unity.dart';

class BluetoothDetailPage extends StatefulWidget {
  static final routeName = '/bluetoothDetailPage';
  // RxList<ScanResult> bluetoothTile;

  BluetoothDetailPage({
    // this.bluetoothTile,
    // @required this.sensorData,
    Key? key,
  }) : super(key: key);
  @override
  _BluetoothDetailPageState createState() => _BluetoothDetailPageState();
}

class _BluetoothDetailPageState extends State<BluetoothDetailPage>
    with SingleTickerProviderStateMixin {
  late AnimationController controller;
  BluetoothController _bluetoothController = Get.find<BluetoothController>();

  void initState() {
    super.initState();
    // controller = AnimationController(
    //     duration: const Duration(milliseconds: 100), vsync: this);
    // animation = Tween<double>(begin: 0, end: 35).animate(controller);
    // controller.repeat();
  }

  @override
  void dispose() {
    controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    // var resultData = _bluetoothController.resultData;
    // //* resultData 초기값 에러.
    // resultData?.add(0.0);
    // resultData?.add(0.0);
    return Scaffold(
        appBar: AppBar(title: Text("Detail")),
        body: Obx(
          () {
            double wheelSpeed = _bluetoothController.wheelVeckm.value!;
            double prevWheelSpeed = _bluetoothController.prevWheelVec.value!;

            var wheelSpeedKmh = wheelSpeed.toStringAsFixed(1);
            var wheelSpeedString = wheelSpeed.toStringAsFixed(2);
            var wheelSpeedDouble = double.parse(wheelSpeedString);
            // var wheelSpeedInt = wheelSpeedDouble.toInt();

            // var prevWheelSpeedKmh = prevWheelSpeed.toStringAsFixed(1);
            var prevWheelSpeedString = prevWheelSpeed.toStringAsFixed(2);
            var prevWheelSpeedDouble = double.parse(prevWheelSpeedString);
            // var prevWheelSpeedInt = prevWheelSpeedDouble.toInt();

            // var resultCurrStr =
            //     resultData?[resultData.length - 1].toStringAsFixed(2) ?? "0.0";
            // var resultPrevStr =
            //     resultData?[resultData.length - 2].toStringAsFixed(2) ?? "0.0";
            // var resultCurr = double.parse(resultCurrStr);
            // var resultPrev = double.parse(resultPrevStr);
            // double? resultDiff = resultCurr - resultPrev;

            // List<double> wheelVelocity = _bluetoothController.saveResult;
            // var prevSpeedInt;

            Stream<SpeedModel?> speedStream =
                _bluetoothController.speedStream.stream;

            return Column(
              children: [
                Center(
                    child: Text(
                  "Get",
                  style: TextStyle(fontSize: 18.0, fontWeight: FontWeight.bold),
                )),
                Divider(thickness: 8.0),
                StreamBuilder<SpeedModel?>(
                    stream: speedStream,
                    builder: (context, snapshot) {
                      if (snapshot.hasData) {
                        SpeedModel speedData = snapshot.data!;
                        return Column(
                          children: [
                            _speedModelData(
                                title: "Sensor Data",
                                data: speedData.sensorData.toString()),
                            _speedModelData(
                                title: "Wheel Latency Ms",
                                data: speedData.wheelLatencyMs.toString()),
                            _speedModelData(
                                title: "Wheel Rev",
                                data: speedData.wheelRev.toString()),
                          ],
                        );
                      }
                      return Container();
                    }),
                SizedBox(height: 20.0),
                Text("Wheel_M/S : ${wheelSpeedKmh}ms"),
                TextButton(
                    onPressed: () {
                      Get.to(UnityScreen());
                    },
                    child: Text("유니티 게임 시작")),
                // AnimatedSize(
                //   vsync: this,
                //   curve: Curves.linear,
                //   duration: const Duration(seconds: 1),
                // child:

                // if (resultData?.length != 0)
                //   if (resultDiff > 0)
                //     for (int i = 0; resultPrev < resultCurr; resultPrev += 0.1)
                //       Stack(
                //         children: <Widget>[
                // Speedometer(
                //   size: 250,
                //   minValue: 0.0,
                //   maxValue: 35.0,
                //   currentValue: resultCurr, // 현재 속도
                //   // currentValue: 76, // 현재 속도
                //   warningValue: 20.0,
                //   displayText: 'km/h',
                //   animationController: controller,
                //   displayTextStyle: TextStyle(color: Colors.red),
                //   displayNumericStyle: TextStyle(color: Colors.red),
                // ),
                //   ],
                // ),

                // if (resultData?.length != 0)
                //   if (resultDiff <= 0)
                //     for (int i = 0; resultPrev > resultCurr; resultPrev -= 0.1)
                //       Stack(
                //         children: <Widget>[
                //           Speedometer(
                //             size: 250,
                //             minValue: 0.0,
                //             maxValue: 35.0,
                //             currentValue: resultPrev, // 현재 속도
                //             // currentValue: 76, // 현재 속도
                //             warningValue: 20.0,
                //             displayText: 'km/h',
                //             displayTextStyle: TextStyle(color: Colors.red),
                //             displayNumericStyle: TextStyle(color: Colors.red),
                //           ),
                //         ],
                //       ),
                // )
              ],
            );
          },
        ));
  }

  Center _speedModelData({required String title, required String data}) {
    return Center(
        child: Text(
      "$title : $data",
      style: TextStyle(
          color: Colors.blue, fontSize: 15.0, fontWeight: FontWeight.bold),
    ));
  }
}
