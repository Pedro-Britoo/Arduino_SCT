  int lista1 = 0;
  int lista2 = 0;
  int lista3 = 0;
  int lista4 = 0;

  int somatotal = 0;
  int falta = 10;

  void setup() {
    Serial.begin(9600);

    if (falta > 25)
      Serial.println("suas faltas foram estouradas");

  lista1 = 75 + 50 + 70 + 90; 
    lista2 = 75 + 40 + 100 + 20; 
    lista3 = 90 + 20 + 50 + 60; 
    lista4 = 70 + 60 + 80 + 20; 
    int peso1 = 4;
    int peso2 = 3;
    int peso3 = 2;
    int peso4 = 1;

    somatotal = (lista1 * peso1) + (lista2 * peso2) + (lista3 * peso3) + (lista4 * peso4);
    int pesoTotal = peso1 + peso2 + peso3 + peso4;

    int mediaPonderada = somatotal / pesoTotal;

    Serial.print("Soma ponderada total: ");
    Serial.println(somatotal);
    Serial.print("Média ponderada: ");
    Serial.println(mediaPonderada);
  }

  void loop() {
    
  }
