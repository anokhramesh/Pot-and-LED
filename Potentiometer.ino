#define Pot A5
#define Red_LED 13
void setup() 
{
 pinMode(Pot,INPUT);
 pinMode(Red_LED,OUTPUT);
 Serial.begin(9600); 
}

void loop() 
{
  int PotData = analogRead(Pot);
  Serial.print("PotData:=");
  Serial.println(PotData);
  if (PotData < 500)
  {digitalWrite(Red_LED,HIGH);}
  else
  {digitalWrite(Red_LED,LOW);}
  delay(1000);
  

}
