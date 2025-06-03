void setup () {
  Serial.begin(9600);
  
  
  
}

void loop () {
  int x = 1;
  Serial.println("Inicio");
  
  while (x < 10) {
    Serial.println(x);
    x++;
    delay(500);
    
  }
  
  Serial.println("Fim");
  
  
}

void setup () {
  Serial.begin(9600);
  
  
  
}

void loop () {

  bool idade = false;
  
  while(idade == false) {
   Serial.println("Qual a idade do Yuri Alberto");
   while(!Serial.available()){};
   int resposta = Serial.parseInt();
   if(resposta == 24) {
   Serial.println("parabens voce acertou");
   idade = true;
     
     
   
   
   
   }
     
     
     
   
    
    
  }
  
  
  Serial.println("Fora do while");
  
}   