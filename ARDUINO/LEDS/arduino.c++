// programa: Piscar Led Arduino
    // Materiais Arduino Uno
    // 01 - Placa Arduino Uno
    // 01 - Cabo de comunicacao USB para comunicacao do arudiono com o computador
    // 02 Jumper Macho - Macho
    // Protoboard
    // 01 Led
    //- Resistor 330 ohm3 (Laranja, Laranja, Marrom, Dourado).

    //Blibliotecas utlizadas no programa
    // Esquema para ligacao Led

        //Arduino porta dgital 13 / led: anodo +
        //arduino GND   / Resitor: GND
        //resistor      / Led: GND
       // autor: Pedor henrique santos de Brito  data: maio 2025


 
void setup()
{
  Serial.begin(9600);    // iniciando a comunicacao serial com baud rate de 9600
  pinMode(13,OUTPUT);   //Define a porta do LED como saida 
  Serial.println("Deseja ligar o led ?");                     // escreve uma mensagem no serial monitor
   Serial.println("Digite 1 para ligar ou 2 para desligar"); // escreve uma mensagem no serial monito
}

void loop()
{
  if(Serial.available()> 0)         // verificando se estamos recebendo informacoes na serial
  { 
    int valor = Serial.read()-'0'; // convertendo o caractere recebido para um numero inteiro 
    if(valor == 1)                // verifica se o valor digitado e igual a 1 se sim executa as duas linhas abaixo 
    { 
      digitalWrite(13,HIGH);         //Acende o LED
      Serial.println("Led ligado"); // imprimindo a mensagem no monitor Serial
    }
    else if (valor ==2) //verifica se o valor digitado e igual a 2 se sim executa as duas linhas abaixo
    {
      digitalWrite(13,LOW);             // Apaga o LED 
      Serial.println("Led Desligado"); // imprimindo a mensagem no monitor Serial
    }
    
    else // caso o valor digitado seja diferente 
    {
      Serial.println("Opcao invalida. Digite 1 para ligar ou 2 para Desligar");
    }
     delay(1000); // aguarda um segundo para evitar leitura repetida
  } 
}