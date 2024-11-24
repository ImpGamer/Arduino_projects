//Declaracion del PIN de salida (output)
const int LED=13;
//Declaracion del PIN de entrada (input)
const int BOTON=7;
//Declaracion de variable para marcar dato condicional
int valor;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BOTON,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = digitalRead(BOTON);
  if(valor == HIGH) {
    digitalWrite(LED,HIGH);
    Serial.println("El Led esta encendido");
    delay(1000);
  } else {
    Serial.println("El Led se encuentra apagado");
    digitalWrite(LED,LOW);
    delay(1000);
  }
}
