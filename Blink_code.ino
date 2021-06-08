/**********************************************************************************
 *  TITLE: Blink LED using Arduino Uno
 *  Click on the following links to learn more. 
 *  YouTube Video: https://www.youtube.com/channel/UCscQZ6FyFrx3dKgsPSPOVGQ
 *  by IoT withme
 *  Github link :
 *  https://github.com/IoTWM
 **********************************************************************************/


void setup() {
  pinMode(13, OUTPUT);   //enabling pin 13
}

void loop() {
  digitalWrite(13, HIGH);//for sending signal HIGH
  delay(2000);
  digitalWrite(13, LOW);// for sending signal LOW
  delay(2000);
}
