

void setup(){
  
  
  
  
  
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8, OUTPUT);
            
            
            
            
            
             
 }




  void loop(){
    
    if (Serial.available() > 0){
      char vLido=Serial.read();
      vLido = tolower(vLido); 
      
      switch(vLido) {
     case 'a': digitalWrite(8,!digitalRead(8)); break;
     case 'b': digitalWrite(7,!digitalRead(7)); break;                       
     default:
               digitalWrite(8,!digitalRead(8)); break;
               digitalWrite(7,!digitalRead(7)); break;
     break;
      
    }
    
    
      
      
    }
   
      
        
        
    }