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
