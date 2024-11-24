const int boton =2;//Se asigna al PIN 2 una constante
  int valor=0;//Se crea variable "valor" con una valor inicial de 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Se inicializa el motor
    pinMode(boton,INPUT);//Se inicializa el PIN 2 como entrada de datos
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = digitalRead(boton);
  if(valor == HIGH) {
    Serial.println("Encendido");
  } else {
    Serial.println("Apagado");
  }
  delay(1000);
}
