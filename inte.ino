int inputPinuno = 5; //D1 izquierda
int inputPincero = 16; //D0 derecha

void setup() {
  Serial.begin(9600);
  pinMode(inputPinuno, INPUT);
  pinMode(inputPincero, INPUT);
  
}

void loop() {
 int valor1 = digitalRead(inputPinuno);  //lectura digital de pin
 int valor2 = digitalRead(inputPincero);  //lectura digital de pin
// Serial.println(valor1);
 //Serial.println(valor2);
 if(valor1 == HIGH){
  Serial.println("IZQUIERDA");
  delay(100);
  
 }
 else{
   if(valor2 == HIGH){
    Serial.println("DERECHA");
  delay(100);
 }
 else
 {
  Serial.println("APAGADO");
  delay(100);
 }
}
 
}
