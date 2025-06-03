float c,f;
char repetir;



void setup () {
  Serial.begin(9600);
  
  }

void loop () {
  
  do {
    Serial.println("digite a temperatura em celcius");
   while(!Serial.available()){}
  float c = Serial.parseFloat();
    
   f = 9.0 * c / 5 + 32;
     
     Serial.println("Equivalente em fahrenheit" + String(f,2));
    delay(1000);
    
    Serial.println("Quer repetir? s/n");
    while(!Serial.available());
   	repetir = tolower ( repetir = Serial.read());
	Serial.println("");    
     
   
  
  
  
  } while(repetir == 's');
 	Serial.println("FIM");
  while(true);
  }
  
 	
  
