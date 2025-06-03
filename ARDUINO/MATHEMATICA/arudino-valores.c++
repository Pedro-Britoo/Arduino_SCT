// C++ code
//
void setup()
{
  Serial.begin(9600);
  int a = 19;
  int b = 5;
  
  int resp = a / b;
  int resp2 = a % b;
  
  Serial.println("O resultado da divisao e:" string(resp) )
  Serial.println("o outro resultado e:" string (resp2) )
}

void loop()
{
  }