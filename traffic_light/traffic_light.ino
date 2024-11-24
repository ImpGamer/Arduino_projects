int ledVerde =2;
int ledAmarillo = 4;
int ledRojo = 8;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledRojo,OUTPUT);
}

void loop() {
  // Incio de verde a rojo
  digitalWrite(ledVerde,HIGH);
  delay(7000);
  for(i=0;i<4;i++) {
    digitalWrite(ledVerde,LOW);
    delay(700);
    digitalWrite(ledVerde,HIGH);
    delay(700);
  }
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarillo,HIGH);
  delay(2000);
  digitalWrite(ledAmarillo,LOW);
  digitalWrite(ledRojo,HIGH);

  //De regreso rojo a verde
  delay(7000);
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledAmarillo,HIGH);
  delay(2000);
  digitalWrite(ledAmarillo,LOW);
}
