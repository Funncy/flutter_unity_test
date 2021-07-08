import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:get/get.dart';
import 'package:unity_project/controller/bluetooth_controller.dart';

class UnityScreen extends StatefulWidget {
  static const routeName = '/untiy';
  UnityScreen({Key? key}) : super(key: key);
  @override
  _UnityScreenState createState() => _UnityScreenState();
}

class _UnityScreenState extends State<UnityScreen> {
  BluetoothController _bluetoothController = Get.find<BluetoothController>();
  late UnityWidgetController _unityWidgetController;

  @override
  void initState() {
    // TODO: implement initState

    super.initState();
  }

  @override
  void dispose() {
    _unityWidgetController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    var size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: AppBar(
        title: Text('Safe Mode Screen'),
      ),
      body: Container(
        width: size.width,
        height: size.height,
        child: Stack(
          children: <Widget>[
            Container(
              width: size.width,
              height: size.height,
              child: UnityWidget(
                onUnityCreated: onUnityCreated,
                onUnityMessage: onUnityMessage,
              ),
            ),
          ],
        ),
      ),
    );
  }

  void setRotationSpeed(String speed) {
    _unityWidgetController.postMessage(
      'KartClassic_Player',
      'SetSpeed',
      speed,
    );
  }

  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    this._unityWidgetController = controller;
    _bluetoothController.wheelVec.listen((speed) {
      print("listen!!!! $speed");
      setRotationSpeed(speed.toString());
    });
  }
}
