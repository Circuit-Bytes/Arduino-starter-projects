void setup(){
  
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,INPUT);

}

void loop(){
  
  if(digitalRead(7)==HIGH){
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);
  }
  else{
    
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
  }
    
  
}