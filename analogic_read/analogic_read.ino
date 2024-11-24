int corrient_value = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  corrient_value = analogRead(A0); //Lectura del PIN A0 analogo

  Serial.print("Valor analogico: ");
  Serial.println(corrient_value);
  delay(1000);
}
