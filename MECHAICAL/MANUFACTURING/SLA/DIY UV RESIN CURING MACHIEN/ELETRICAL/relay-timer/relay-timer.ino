void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);//CONNECTED TO S TERMINAL OF REALEY OR SRATE TO LOW VOLTAGE MOTOR
digitalWrite(7,HIGH);// TURN ON
  delay(300000);//ON FOR 5MIN, {300000millisec}
digitalWrite(7,LOW);//OFF
delay(5000);// OFF

}

void loop() {// YOU CA ADD REPTING LOOPS HERE

}
