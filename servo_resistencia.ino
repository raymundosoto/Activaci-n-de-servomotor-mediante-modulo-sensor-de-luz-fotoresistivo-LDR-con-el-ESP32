

//Agregamos las libreriras del servo
#include <ESP32Servo.h>
//Instanciamos nuestro servo
//Servo servo1;
#define LIGHT_SENSOR_PIN 14
Servo servo2;
//int pinServo1=2;
int pinServo2 =2;
void setup()
{
  Serial.begin(9600);
  //Inicializamos la posicion del servo
  //servo1.attach(pinServo1, 500, 2500);
  servo2.attach(pinServo2);
}
//Inicializamos la posicion (en grados) del servo
int pos = 0;

void loop() {

  int analogValue = digitalRead(LIGHT_SENSOR_PIN);

  Serial.println("Digital read = "+ String(analogValue));



  if (analogValue == 0) {

     servo2.write(90);

  } else {
     
     servo2.write(0);
     delay(100);
   }
  };
