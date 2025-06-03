String nome;
int idade;
float altura;

void setup() {
  Serial.begin(9600);

  Serial.println("Qual sua idade?");
  delay(5000);  
  idade = Serial.readString().toInt();

  Serial.println("Qual sua altura?");
  delay(5000);
  altura = Serial.readString().toFloat();

  Serial.println("Qual seu nome?");
  delay(5000);
  nome = Serial.readString();  

  if (idade == 16) {
    Serial.println("Sua idade é 16");
  }

  if (abs(altura - 1.80) < 0.01) {
    Serial.println("Sua altura é 1.80");
  }

  if (nome == "Pedro") {
    Serial.println("Seu nome e Pedro");
  }
}

void loop() {
}
