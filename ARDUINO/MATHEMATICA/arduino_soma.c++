int N,x,soma;




void setup () {
  Serial.begin(9600);
  
  }

void loop () {
  Serial.println("Informe o valor de n:");
    while(!Serial.available());
    N = Serial.parseInt();
  
  soma = 0;
  
  for(int i = 1; i < N; i++) {
    
 Serial.println("informe o " + String(i) + "Valor");
  while(!Serial.available());
   x = Serial.parseInt();
    soma = soma + x;
  }
   
  
  
  Serial.println("A soma dos valores:" + String(soma) + "\n");
  }
  
 	
  