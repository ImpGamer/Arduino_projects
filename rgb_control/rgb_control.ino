const int ROJO = 9;
const int AZUL = 10;
const int VERDE = 11;

void setup() {
  pinMode(ROJO,OUTPUT);
  pinMode(AZUL,OUTPUT);
  pinMode(VERDE,OUTPUT);
}

void loop() {
  //Si nuestro led es de anodo comun (como este caso) el color se encendera con un valor de LOW
  digitalWrite(ROJO,LOW);
  digitalWrite(AZUL,HIGH);
  digitalWrite(VERDE,HIGH);
  delay(2000);

  digitalWrite(ROJO,HIGH);
  digitalWrite(AZUL,LOW);
  digitalWrite(VERDE,HIGH);
  delay(2000);

  digitalWrite(ROJO,HIGH);
  digitalWrite(AZUL,HIGH);
  digitalWrite(VERDE,LOW);
  delay(2000);
}
