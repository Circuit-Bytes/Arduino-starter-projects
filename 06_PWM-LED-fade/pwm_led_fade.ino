void setup(){
  
  pinMode(A2,OUTPUT);
  
}

void loop(){
  
  analogWrite(A3, 64);  // 25% brightness
  delay(2000);
  analogWrite(A4, 128); // 50% brightness
  delay(2000);
  analogWrite(A5, 255); // 100% brightness
  delay(2000);

}