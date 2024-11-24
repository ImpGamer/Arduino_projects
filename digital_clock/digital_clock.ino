const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}

void loop() {
  set_digital_clock(HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,LOW);
  delay(2000);
  set_digital_clock(LOW,HIGH,HIGH,LOW,LOW,LOW,LOW);
  delay(2000);
  set_digital_clock(HIGH,HIGH,LOW,HIGH,HIGH,LOW,HIGH);
  delay(2000);
  set_digital_clock(HIGH,HIGH,HIGH,HIGH,LOW,LOW,HIGH);
  delay(2000);
  set_digital_clock(LOW,HIGH,HIGH,LOW,LOW,HIGH,HIGH);
  delay(2000);
  set_digital_clock(HIGH,LOW,HIGH,HIGH,LOW,HIGH,HIGH);
  delay(2000);
  set_digital_clock(HIGH,LOW,HIGH,HIGH,HIGH,HIGH,HIGH);
  delay(2000);
  set_digital_clock(HIGH,HIGH,HIGH,LOW,LOW,LOW,LOW);
  delay(2000);
  set_digital_clock(HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH);
  delay(2000);
  set_digital_clock(HIGH,HIGH,HIGH,LOW,LOW,HIGH,HIGH);
  delay(2000);
}

void set_digital_clock(uint8_t PIN_A,uint8_t PIN_B,uint8_t PIN_C,uint8_t PIN_D,uint8_t PIN_E,uint8_t PIN_F,uint8_t PIN_G) {
  digitalWrite(A,PIN_A);
  digitalWrite(B,PIN_B);
  digitalWrite(C,PIN_C);
  digitalWrite(D,PIN_D);
  digitalWrite(E,PIN_E);
  digitalWrite(F,PIN_F);
  digitalWrite(G,PIN_G);
}