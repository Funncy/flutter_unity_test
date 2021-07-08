import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:unity_project/controller/bluetooth_controller.dart';

import 'bluetooth_loading_page.dart';

class BluetoothPage extends StatefulWidget {
  static final routeName = '/bluetoothPage';
  const BluetoothPage({Key? key}) : super(key: key);
  @override
  _BluetoothPageState createState() => _BluetoothPageState();
}

// TODO: 와우 센서만 검색되도록 해야함.
// TODO: 한번 멈췄다가 재시작하면 notify가 작동을 안하는 문제가있음 -> 해결해야함? => (와후 센서) nRf앱도 오랫동안 입력이 없을시 자동 디스커넥트됨.
class _BluetoothPageState extends State<BluetoothPage> {
  BluetoothController _bluetoothController = Get.find<BluetoothController>();
  // ConnectWheelService connectWheelService = ConnectWheelService();
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        iconTheme: IconThemeData(
          color: Colors.black54,
        ),
        backgroundColor: Colors.amber[400],
        title: Text(
          "BLE",
          style: TextStyle(color: Colors.black54, fontWeight: FontWeight.bold),
        ),
      ),
      body: Obx(() {
        var scanList = _bluetoothController.scanList.toList();
        return ListView.builder(
            itemCount: scanList.length,
            itemBuilder: (context, index) {
              return GestureDetector(
                onTap: () {
                  //1. 블루투스 서비스 연결을 진행한다.
                  //2. 넘겨주는 인자값은 scanList[index].device => device정보를 넘겨주자.

                  // _bluetoothController.setService(ConnectWheelService(index));
                  // _bluetoothController.connectWheelService(index);
                  // _bluetoothController.connectService(index);
                  _bluetoothController.connectService(scanList[index].device);
                  _bluetoothController.isloading =
                      !_bluetoothController.isloading;
                  if (_bluetoothController.isloading) {
                    Get.toNamed(BluetoothLoadingPage.routeName);
                  }
                },
                child: ListTile(
                  title: Text(
                    'name : ${scanList[index].device.name}',
                  ),
                  subtitle: Text(scanList[index].device.id.toString()),
                  trailing: Text(scanList[index].rssi.toString()),
                  //     Text(bluetoothTile[index].advertisementData.toString()),
                ),
              );
            });
      }),
      floatingActionButton: Obx(
        () => FloatingActionButton(
            backgroundColor: Colors.amber[400],
            foregroundColor: Colors.black,
            onPressed: _bluetoothController.scanToggle,
            tooltip: 'scan',
            child: Icon(
              _bluetoothController.isScanning ? Icons.stop : Icons.play_arrow,
            )),
      ),
    );
  }
}
