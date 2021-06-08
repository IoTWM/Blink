void setup() {
  pinMode(13, OUTPUT);   //enabling pin 13
}

void loop() {
  digitalWrite(13, HIGH);//for sending signal HIGH
  delay(2000);
  digitalWrite(13, LOW);// for sending signal LOW
  delay(2000);
}
