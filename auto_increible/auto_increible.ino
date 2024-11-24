//Declaracion de todas los pines y sus respectivas salidas de datos
const int Led1=5;
const int Led2=6;
const int Led3=7;
const int Led4=8;
const int Led5=9;
int tiempo=100;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led4,OUTPUT);
  pinMode(Led5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led5,HIGH);
  delay(tiempo);
  digitalWrite(Led5,LOW);
  delay(tiempo);
  digitalWrite(Led4,HIGH);
  delay(tiempo);
  digitalWrite(Led4,LOW);
  delay(tiempo);
  digitalWrite(Led3,HIGH);
  delay(tiempo);
  digitalWrite(Led3,LOW);
  delay(tiempo);
  digitalWrite(Led2,HIGH);
  delay(tiempo);
  digitalWrite(Led2,LOW);
  delay(tiempo);
  digitalWrite(Led1,HIGH);
  delay(tiempo);
  digitalWrite(Led1,LOW);
  delay(tiempo);

//Iluminacion de regreso
  digitalWrite(Led1,HIGH);
  delay(tiempo);
  digitalWrite(Led1,LOW);
  delay(tiempo);
  digitalWrite(Led2,HIGH);
  delay(tiempo);
  digitalWrite(Led2,LOW);
  delay(tiempo);
  digitalWrite(Led3,HIGH);
  delay(tiempo);
  digitalWrite(Led3,LOW);
  delay(tiempo);
  digitalWrite(Led4,HIGH);
  delay(tiempo);
  digitalWrite(Led4,LOW);
  delay(tiempo);
  digitalWrite(Led5,HIGH);
  delay(tiempo);
  digitalWrite(Led5,LOW);
  delay(tiempo);

}