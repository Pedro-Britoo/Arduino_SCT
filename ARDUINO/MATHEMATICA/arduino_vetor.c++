void setup() {
  Serial.begin(9600);

  Serial.println("Informe a quantidade de numeros:");
  while (!Serial.available());
  int n = Serial.parseInt();

  float valores[n];  


  for (int i = 0; i < n; i++) {
    int cont = i + 1;
    Serial.println("Informe o " + String(cont) + " valor");
    while (!Serial.available());
    valores[i] = Serial.parseFloat();
  }
  Serial.println(" ");

  for (int i = 0; i < n; i++) {
    Serial.println(String(valores[i], 2));
  }
}

void loop() {

}
