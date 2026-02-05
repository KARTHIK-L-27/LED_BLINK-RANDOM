void setup() {
  pinMode(12, OUTPUT);   
  pinMode(13, OUTPUT);   
}

void loop() {
  int t = random(100, 1000); 

  
  digitalWrite(12, HIGH);
  delay(t);
  digitalWrite(12, LOW);

 
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
