int faltas;
bool desejaContinuar = false;
float mediaSprints;
float participacao;
float mediaFinal;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Digite a nota da SPRINT 1: ");
  while(!Serial.available()); // Aguarda a entrada de dados do usuário
  float n1 = Serial.parseFloat(); // Lê o número do tipo Int na Serial
  Serial.println(n1);
  
  Serial.print("Digite a nota da SPRINT 2: ");
  while(!Serial.available()); // Aguarda a entrada de dados do usuário
  float n2 = Serial.parseFloat(); // Lê o número do tipo Int na Serial
  Serial.println(n2);
  
  Serial.print("Digite a nota da SPRINT 3: ");
  while(!Serial.available()); // Aguarda a entrada de dados do usuário
  float n3 = Serial.parseFloat(); // Lê o número do tipo Int na Serial
  Serial.println(n3);
  
  Serial.print("Digite a nota da SPRINT 4: ");
  while(!Serial.available()); // Aguarda a entrada de dados do usuário
  float n4 = Serial.parseFloat(); // Lê o número do tipo Int na Serial
  Serial.println(n4);
  
  Serial.print("Digite a quantidade de faltas (max: 25 faltas): ");
  while(!Serial.available()); // Aguarda a entrada de dados do usuário
  int faltas = Serial.parseInt();
  Serial.println(participacao);
  
  mediaSprints = ((n1 + n2 + n3 + n4) / 4.0) * 0.75; // Cálculo média ponderada
  participacao = (faltas > 25)? 0 : (25 - faltas) / 25.0 * 25; // Cálculo faltas
  mediaFinal = mediaSprints + participacao;
  
  Serial.println("A media das sprints e: " + String(mediaSprints, 3));
  Serial.println("A partipacao e: " + String(participacao, 3));
  Serial.print("A media final e: " + String(mediaFinal, 3));
  Serial.println("\n-----------------------------------------------");
  delay(1000);
  
  Serial.println("Deseja inserir outra informacao? (s/n) ");
    while (!Serial.available());
  
  if (Serial.available()) 
  {
    const char decisao = Serial.read();
    while (decisao != 's' && decisao != 'S') // Lê um único caracter no Serial (s/n)
    
      {
        desejaContinuar = true;
        Serial.println("Encerrando...");
        while (true); // Pausa definitiva
      }
  }
}