void setup() {
  // put your setup code here, to run once:
  //Setear como nuestro PIN 8 como salida de dato
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Enciende el led
  digitalWrite(8,HIGH);
  //Espera 1 segundo
  delay(1000);
  //Apaga el led diciendo desde que PIN es conectado
  digitalWrite(8,LOW);
  //Espera 1 segundo
  delay(1000);
}
