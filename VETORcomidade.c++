
void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  Serial.println("informe quantas pessoas serao cadastradas");
  while(!Serial.available());
  int n = Serial.parseInt();
    
  String nomes[n]; // recebe uma lista de nomes do nosso available em cima
  int idades [n]; // recebe int de idades
  float altura[n]; // recebe float de altura
  
  
  for (int i =0; i < n; i++) {
  
    Serial.println("Informe o nome da " + String(i+1)+ "Pessoa");
    while(!Serial.available());
    nomes [i] = Serial.readString();
                            
   Serial.println("Informe a idade de" + String(nomes[i]));
	while(!Serial.available());
    idades [i] = Serial.parseInt();
                            
    
                            
   Serial.println(String(nomes[i]) + "de" + String (idades[i]) + "anos, mede quanto de altura?");
   while(!Serial.available());
   altura [i] = Serial.parseFloat();                     
    
  
  }
  
 float soma = 0.0;
  for (int i=0;i< n ; i++) {
  soma += altura[i];
  
  
  }
  
  float media = soma /n;
  Serial.println("Altura media:"+ String(media,2));
  
  
  int cont = 0;
  //for para porcentagem
  for (int i=0; i< n;i++){
  
    if (idades[i] < 16) {
      
    cont ++;
    
    
    }
    
  }
  
  float porcentagem = cont /n * 100;
  Serial.println("Pessoas com menos de 16 anos: "+ String(porcentagem,1)+ "%");
   while(true);


}