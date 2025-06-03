int numero1, numero2, numero3;
int menordeles;



void setup()
{
  
  
  
  Serial.begin(9600);
  Serial.println("digite o primeiro numero inteiro ");
    while(!Serial.available());
    numero1 = (Serial.parseInt());
  
   Serial.println("digite o segundo numero inteiro ");
    while(!Serial.available());
    numero2 = (Serial.parseInt());
  
  
   Serial.println("digite o terceiro numero inteiro ");
    while(!Serial.available());
    numero3 = (Serial.parseInt());
  
   
    menordeles = numero1;

  if (numero2 < menordeles) {
    menordeles = numero2;
  }

  if (numero3 < menordeles) {
    menordeles = numero3;
  }
  
  
  Serial.println(menordeles);
  

}
  void loop(){

 
  
  
}
  

