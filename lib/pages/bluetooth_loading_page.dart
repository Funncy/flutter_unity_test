import 'package:flutter/material.dart';

class BluetoothLoadingPage extends StatelessWidget {
  static final routeName = '/bluetoothLoadingPage';
  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;

    return Center(
      child: Container(
        height: size.height / 4,
        width: size.width / 2,
        child: CircularProgressIndicator(
          strokeWidth: 10.0,
          backgroundColor: Colors.grey,
        ),
      ),
    );
  }
}
