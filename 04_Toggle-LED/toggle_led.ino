bool ledstate=LOW;
bool prevbuttonstate=LOW;
bool currentbuttonstate;

void setup(){
  
  pinMode(12,OUTPUT);
  pinMode(2,INPUT);

}

void loop(){
  
  currentbuttonstate=digitalRead(2);
  if(currentbuttonstate==HIGH && prevbuttonstate==LOW){
    ledstate=!ledstate;
    digitalWrite(12,ledstate?HIGH:LOW);
  }
  prevbuttonstate=currentbuttonstate;
   
}
