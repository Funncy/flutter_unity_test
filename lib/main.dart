import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:unity_project/controller/bluetooth_controller.dart';
import 'package:unity_project/pages/bluetooth_detail_page.dart';
import 'package:unity_project/pages/bluetooth_loading_page.dart';
import 'package:unity_project/pages/bluetooth_page.dart';
import 'package:unity_project/unity.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return GetMaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      initialRoute: '/',
      routes: {
        '/': (context) => StartScreen(),
        UnityScreen.routeName: (context) => UnityScreen(),
        BluetoothDetailPage.routeName: (context) => BluetoothDetailPage(),
        BluetoothLoadingPage.routeName: (context) => BluetoothLoadingPage(),
        BluetoothPage.routeName: (context) => BluetoothPage(),
      },
    );
  }
}

class StartScreen extends StatefulWidget {
  const StartScreen({Key? key}) : super(key: key);

  @override
  _StartScreenState createState() => _StartScreenState();
}

class _StartScreenState extends State<StartScreen> {
  @override
  void initState() {
    Get.put(BluetoothController());
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Container(
      child: Center(
        child: MaterialButton(
          child: Text("유니티 위젯"),
          onPressed: () {
            Navigator.of(context).pushNamed(BluetoothPage.routeName);
          },
        ),
      ),
    ));
  }
}
