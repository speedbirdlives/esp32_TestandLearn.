//testing blink code on esp32

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(23,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);

digitalWrite(23,HIGH);
delay(1000);
digitalWrite(23,LOW);
delay(1000);
}


// Conclusions: Pin D2 is connected to the blue LED on the board and pin D23-GPIO 23 is safe to use
