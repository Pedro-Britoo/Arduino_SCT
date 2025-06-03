
int precolaranja = 0;
int precomaca = 0;
int precopera = 0;
int fruta;

void setup(){Serial.begin(9600);}
  void loop(){
    Serial.println("Ïnforme qual fruta deseja: \n1 - laranja \2 - maca \3 - maracuja");
	while(!Serial.available());
 	fruta = Serial.parseInt();
    
    
    switch(fruta) {
      
      case 1:(fruta); 
        precolaranja = 11;
        
        Serial.println("\nA duzia de laranjas custa R$ 11,00");
        break;
      
           
           
           
      case 2: (fruta);
        precomaca = 8;
        
        Serial.println("\nA duzia de maca custa R$ 8,00");
      break;
        
      
      
      case 3:(fruta);
        precopera = 6;
        
        Serial.println("\nA duzia de pera custa R$ 6,00");
      break;
        
      
        
        
    }
           
         
  
  
}









int dia;

void setup(){Serial.begin(9600);}
  void loop(){
    Serial.println("Digite um numero da semana ");
	while(!Serial.available());
 	dia = Serial.parseInt();
    
    
    switch(dia) {
      
      case 1:(dia); 
        Serial.println("\nA Domingo ");
        break;
      
           
           
           
      case 2: (dia);
        
        Serial.println("\nA Segunda ");
      break;
        
      
      
      case 3:(dia);
        
        
        Serial.println("\nA  terca");
      break;
      
      case 4:(dia);
        
        
        Serial.println("\nA  quarta");
      break;
      
      case 5:(dia);
        
        
        Serial.println("\nA  quinta");
      break;
      
      case 6:(dia);
        
        
        Serial.println("\nA  sexta");
      break;
      
      case 7:(dia);
        
        
        Serial.println("\nA sabado  ");
      break;
      
      default : (dia);
      
      Serial.println("Invalido, tente novamente");
        
      
        
        
    }
           
         
  
  
}
  


  

