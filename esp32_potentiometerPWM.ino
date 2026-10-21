//testing potentiometer and PWM on esp32

int pot = 4;
int led = 23;
int val;


void setup() {
  // put your setup code here, to run once:

//Setting up pins and serial monitor
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

//reading potentiometer c-tap value
val = analogRead(pot);
Serial.println(val);

//PWM analog write into led
analogWrite(led,val);



}

//The esp32 has a 12-bit Digital-Analog converter, hence it offers more precise analog readings from 0-4095.
//Whereas, the Arduino has a 10-bit converter, offering analog readings from 0-1023.


