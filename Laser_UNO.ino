void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT); //Buzzer Pin
pinMode(7,INPUT); // Light Sensor
pinMode(4, OUTPUT);
delay(10);
}
int i=0;
void loop(){
  // put your main code here, to run repeatedly:

if(digitalRead(7)==LOW)
{
  digitalWrite(4,HIGH);
}

else{
  a:
  digitalWrite(4,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
  i++;
  if(i<5){
  goto a;
  }
  }
}