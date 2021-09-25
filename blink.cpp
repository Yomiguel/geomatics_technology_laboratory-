//the variable led is declared in GPIO23 (general purpose input/output)
int led = 23; 

void setup() {
  //is declared as output to the led with the function pinMode()
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);  
}
