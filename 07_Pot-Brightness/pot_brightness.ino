int potValue;
int brightness;
 
void setup()
{
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
	potValue=analogRead(A0);
  	brightness=map(potValue,0,1023,0,255);
  	analogWrite(3,brightness);
}