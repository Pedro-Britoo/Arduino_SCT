
void setup(){Serial.begin(9600);}
void loop()
{
  Serial.println("Digite o primeiro valor:");
  while(!Serial.available());
  int num1 = Serial.parseInt();
  Serial.println(num1);
  
   Serial.println("Digite o segundo valor:");
  while(!Serial.available());
  int num2 = Serial.parseInt();
  Serial.println(num2);
  
   Serial.println("Digite o terceiro valor:");
  while(!Serial.available());
  int num3 = Serial.parseInt();
  Serial.println(num3);

  float media = (num1+num2+num3) / 3.0;

  Serial.println("A media dos numeros é de :" string (media));
}
    
