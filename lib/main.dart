import 'package:flutter/material.dart';
import 'package:unity_project/unity.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      initialRoute: '/',
      routes: {
        '/': (context) => StartScreen(),
        UnityScreen.routeName: (context) => UnityScreen(),
      },
    );
  }
}

class StartScreen extends StatelessWidget {
  const StartScreen({Key key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Container(
      child: Center(
        child: MaterialButton(
          child: Text("유니티 위젯젯"),
          onPressed: () {
            Navigator.of(context).pushNamed(UnityScreen.routeName);
          },
        ),
      ),
    ));
  }
}
