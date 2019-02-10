//---------초기 선언들---------

//입출력 핀들
const int pin_Led = 8; //LED 제어할 핀
const int pin_BrightSensor = A0; //조도센서를 감지할 핀

//변수들
int flag_led = LOW; //LED 제어 상태

//상수들
const int threshold_bright = 800;

//구조체들

//---------기능 함수들---------

//---------메인 함수들---------
void setup() {

  //사용할 핀들의 용도를 제어/감지로 설정함
  pinMode(pin_Led, OUTPUT); 
  pinMode(pin_BrightSensor, INPUT);
}

void loop() {

  //LED에게 현재 제어상태를 적용함
  digitalWrite(pin_Led, flag_led); 

  //조도센서의 상태에따라 LED제어를 바꿈
  if (analogRead(pin_BrightSensor) < threshold_bright)
  {
    flag_led = HIGH;
  }
  else
  {
    flag_led = LOW;
  }
  
}
