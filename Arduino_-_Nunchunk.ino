#include <Wire.h>
#include <ArduinoNunchuk.h>

int led = 8;
int CapteurBas = LOW;       
int ChangementEtat = 0;     

#define BAUDRATE 19200

ArduinoNunchuk nunchuk = ArduinoNunchuk();

void setup()
{
  Serial.begin(BAUDRATE);
  nunchuk.init();
}

void loop()
{
  nunchuk.update();

  Serial.print(nunchuk.analogX, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.analogY, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.accelX, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.accelY, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.accelZ, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.zButton, DEC);
  Serial.print(' ');
  Serial.println(nunchuk.cButton, DEC);
 

  //if (nunchuk.zButton == HIGH) {    

   // if (ChangementEtat == 1) {

//CapteurBas=!CapteurBas;

     /* ChangementEtat=0;

      digitalWrite(led, CapteurBas); 
     delay(100);
  }  
         
     
  }
  else {

    ChangementEtat=1;
  }*/

}
