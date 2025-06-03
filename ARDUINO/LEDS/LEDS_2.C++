int pinoLED = 3;
float pinoPotencia = A5;
float luminosidadeLED = 0;




void setup() {
 pinMode(pinoLED,OUTPUT);
 pinMode(pinoPotencia,INPUT);
 Serial.begin(9600);
  
  
  
}



void loop() {
	
  
  luminosidadeLED = map(analogRead(pinoPotencia),0,1023,0,255);
	//lica ao LED o valor da Luminosidade gerado pela funcao'funcao map'
	analogWrite(pinoLED,luminosidadeLED);
    Serial.println(luminosidadeLED);

}