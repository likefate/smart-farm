# 스마트팜
### 장점

- 자동화된 운영 : 스마트팜은 자동화된 시스템과 센서를 통해 농작물의 생장, 관리 및 수확 과정을 지원합니다.<br>이로 인해 인력과 시간을 절약할 수 있으며, 일관된 품질과 생산성을 유지할 수 있습니다.

- 자원 효율성 : 스마트팜은 물, 비료, 에너지 등의 자원 사용을 효율적으로 관리합니다.<br>센서와 자동제어 시스템을 통해 식물의 수분과 영양분 공급을 최적화하고, 불필요한 낭비를 줄일 수 있습니다.

- 실시간 모니터링 및 관리 : 스마트팜은 실시간으로 작물의 상태와 환경 조건을 모니터링할 수 있습니다.<br>센서 데이터 및 데이터 분석을 통해 문제를 조기에 감지하고, 적절한 대응을 취할 수 있습니다. 이는 작물의 생산성과 품질을 향상시키는 데 도움이 됩니다.

### 단점

- 초기 투자 비용 : 스마트팜 구축에는 초기 투자 비용이 필요합니다.<br>센서, 제어 시스템, 데이터 인프라 등의 구축과 유지보수 비용이 발생할 수 있습니다.<br>이는 일부 농업 경영자에게는 장벽이 될 수 있습니다.

- 기술적인 문제 : 스마트팜 시스템은 기술적인 문제에 영향을 받을 수 있습니다.<br>센서 오작동, 네트워크 연결 문제 또는 데이터 해킹과 같은 문제가 발생할 수 있습니다.<br>이러한 문제는 시스템의 안정성과 신뢰성에 영향을 미칠 수 있습니다.

- 인력의 기술 요구 : 스마트팜 운영을 위해서는 농업 경영자와 종업원들이 새로운 기술을 습득하고 사용할 수 있어야 합니다.<br>기술적인 능력을 보유하지 않은 경우, 시스템의 이점을 최대한 활용하기 어려울 수 있습니다.

# 센서 & 장치

### UV 센서

![uv_sensor_img_1](https://github.com/likefate/smart-farm/blob/main/img/uv_sensor_img_1.jpg)

- 원리 : 눈에 보이는 빞은 파장이 길어서 센서를 통과하지만, 눈에 보이지 않는 자외선은 센서의 음극에 걸리고 광전효과와 방전효과로 자외선이 감지되는 원리.

### PH 센서

![ph_sensor_img_1](https://github.com/likefate/smart-farm/blob/main/img/ph_sensor_img_1.jpg)

- 원리 : pH 센서는 용액 내의 수소 이온과 직접 반응하여 측정하고자 하는 용액의 pH값에 비례하는 기전력을 발생시킨다. 전체적인 구조는 전지와 같다.

### EC 센서

![ec_sensor_img_1](https://github.com/likefate/smart-farm/blob/main/img/ec_sensor_img_1.jpg)

- 원리 : EC센서의 전극이 용액 속 이온과 상호작용하는데, 이때 용액 내 이온의 양과 이온 운동성에 따라 전기 전도도가 변화하는 것을 이용하여 전도도를 측정한다.

### 식물 생장용 LED

![plant_led_img_1](https://github.com/likefate/smart-farm/blob/main/img/plant_led_img_1.jpg)

- 식물의 광합성에 필요한 특정 파장의 빛을 제공하여 식물의 광합성 작용과 생장을 촉진하는 조명 시스템.
- 식물 생장에 중요한 빛은 파랑색과 빨간색으로, 파란색(400-500nm)은 광합성 작용에 중요한 역할을 하고, 빨간색(600-700nm)은 꽃 피우기 및 열매 생산에 영향을 준다.

### SMPS

![smps_img_1](https://github.com/likefate/smart-farm/blob/main/img/smps_img_1.jpg)

- 스위칭 모드 전원 공급장치. 전력 변황과 공급을 위해 스위칭 기술을 사용하는 전원 공급장치이다. 전력 변환 과정에서 고주파 스위칭을 사용하여 입력 전압을 변환하고 안정된 출력 전압을 생성한다.

### ESP32

![esp32_img_1](https://github.com/likefate/smart-farm/blob/main/img/esp32_img_1.jpg)

- ESP32는 Espressif Systems사에서 개발한 저전력 마이크로컨트롤러(마이크로컨트롤러 유닛 + Wi-Fi 및 블루투스 모듈)이다. ESP32는 주로 인터넷 연결이 필요한 IoT(Internet of Things) 프로젝트 및 응용 프로그램에 널리 사용된다.

### 4-channel-relay-module

![4ch_img_1](https://github.com/likefate/smart-farm/blob/main/img/4ch_img_1.jpg)

- 4 채널 릴레이 모듈은 전기 신호를 이용하여 다양한 기기나 회로를 제어하는데 사용되는 장치이다. 이 모듈은 4개의 독립적인 릴레이를 포함하고 있으며, 각각의 릴레이는 독립적으로 제어할 수 있는 채널을 가지고 있다. 즉, 하나의 모듈로 4개의 기기나 회로를 제어할 수 있다. 또한 과전류 및 역전류 보호 등의 보호 기능을 제공하기도 한다.

### 워터펌프 모듈

![water_pump_img_1](https://github.com/likefate/smart-farm/blob/main/img/water_pump_img_1.jpg)

- 워터펌프 모듈은 아두이노 마이크로컨트롤러와 워터펌프를 함께 사용하여 물을 효과적으로 이동시키는 장치이다. 스마트팜에서 식물에 물을 주는 중요한 역할을 담당한다. 

# 회로도

![circuit_diagram_1](https://github.com/likefate/smart-farm/blob/main/img/circuit_diagram_1.png)
