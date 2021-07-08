import 'package:hex/hex.dart';

class SpeedModel {
  final List<int> sensorData;
  final int wheelRev;
  final int wheelLatencyMs;
  // int wheelVelMs_data;

  SpeedModel(this.sensorData, this.wheelRev, this.wheelLatencyMs);

  static fromHex(List<int> data) {
    //16진수 인코드
    var hextemp = HEX.encode(data); //*결과는 String, 안엔 16진수값으로 변환됨.

    if (hextemp.length < 1) return SpeedModel(data, 0, 0);

    //*wheelRev 분석
    String hex1Temp = hextemp.substring(2, 4);
    String hex2Temp = hextemp.substring(4, 6);
    var hexSumTemp = hex2Temp + hex1Temp;

    var wheelRev = int.parse(hexSumTemp, radix: 16);
    // wheelModel.wheelRev = number;

    //*wheelMs 분석
    String vel1Temp = hextemp.substring(10, 12);
    String vel2Temp = hextemp.substring(12, 14);
    var velSumTemp = vel2Temp + vel1Temp;
    print("velSumTemp $velSumTemp");

    var wheelLatencyMs = int.parse(velSumTemp, radix: 16);
    //* 속력 계산.
    return SpeedModel(data, wheelRev, wheelLatencyMs);
  }
}
