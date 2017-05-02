#include <SoftwareSerial.h>

#define rxPin 1
#define txPin 2

int luz_1 = A5;
int lectura_luz;
int turbiedad;


SoftwareSerial BTSerial (rxPin, txPin);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  
lectura_luz = analogRead(luz_1);
turbiedad=map(lectura_luz,0,155,100,0);

if(turbiedad<0){
  turbiedad=0;
}
if(turbiedad>100){
  turbiedad=100;
}

//Serial.println(lectura_luz);
Serial.println(turbiedad);
delay(1000);
}

