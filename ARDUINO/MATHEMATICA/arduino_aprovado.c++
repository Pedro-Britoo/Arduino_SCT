float nota1 ;
float nota2 ;
float notatotal;
void setup()
{
  
  Serial.begin(9600);
  Serial.println("Digite a nota do primeiro bimestre");
    while(!Serial.available());
    int nota1 = (Serial.parseFloat());
  Serial.println("Digite a sua segunda nota do segundo bimestre");
 	while(!Serial.available());
    int nota2 = (Serial.parseFloat());
  
  notatotal = nota1 + nota2;
    Serial.println(notatotal);
  
  if (notatotal < 60) {
    Serial.println("Reprovado");
  }
      else {
      Serial.println("Aprovado");
    }
    
}

void loop()
{
  

}

int valx1 = 0;
int valz1 = 0;



void setup () {
  Serial.begin(9600);
  
  
  
  
}

void loop () {
  
  
  
  Serial.println("Digite valores para x");
   while(!Serial.available()){}
  int valx1 = Serial.parseInt();
  
  
  Serial.println("Digite valores para z");
   while(!Serial.available()){}
  int valz1 = Serial.parseInt();
  
  if (valx1 < valz1) {
    Serial.println("Crescente");
  }
  else {
      Serial.println("Decrescente");
    }
  }
  
 	
  
