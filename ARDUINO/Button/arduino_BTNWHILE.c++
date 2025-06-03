
bool mudar = false;

void setup()
{
  Serial.begin(9600);
  Serial.println(mudar);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
void loop()
{
  while(digitalRead(6)==LOW)
 {
          delay(500);
          mudar = !mudar;
          Serial.println(mudar);
          digitalWrite(2,mudar);
        }
        while(digitalRead(7)==LOW)
        {
          delay(500);
          mudar =!mudar;
          Serial.println(mudar);
          digitalWrite(3,mudar);  
        }
          
          
  
}