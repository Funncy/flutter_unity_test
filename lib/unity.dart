import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityScreen extends StatefulWidget {
  static const routeName = '/untiy';
  UnityScreen({Key key}) : super(key: key);
  @override
  _UnityScreenState createState() => _UnityScreenState();
}

class _UnityScreenState extends State<UnityScreen> {
  UnityWidgetController _unityWidgetController;
  double _sliderValue = 0.0;

  @override
  Widget build(BuildContext context) {
    var size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: AppBar(
        title: Text('Safe Mode Screen'),
      ),
      body: Container(
        width: size.width * 0.9,
        height: size.height * 0.8,
        child: Stack(
          children: <Widget>[
            Container(
              width: size.width * 0.9,
              height: size.height * 0.8,
              child: UnityWidget(
                onUnityCreated: onUnityCreated,
                onUnityMessage: onUnityMessage,
              ),
            ),
            Positioned(
              bottom: 20,
              left: 20,
              right: 20,
              child: Card(
                elevation: 10,
                child: Column(
                  children: <Widget>[
                    Padding(
                      padding: const EdgeInsets.only(top: 20),
                      child: Text("Rotation speed:"),
                    ),
                    Slider(
                      onChanged: (value) {
                        setState(() {
                          _sliderValue = value;
                        });
                        setRotationSpeed(value.toString());
                      },
                      value: _sliderValue,
                      min: 0,
                      max: 30,
                    ),
                  ],
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }

  void setRotationSpeed(String speed) {
    _unityWidgetController.postMessage(
      'CarA',
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
  }
}
