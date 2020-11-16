//*******************************************
//written by ogidan hope
//this code enables you to be able to use the ultrasonic sensor to read distances 
//******************************************


const int trigPin = 3;
const int echoPin = 4;
float distance;
float duration;


void setup() {
  // put your setup code here, to run once:       
pinMode(4,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600); 

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,LOW);
delay(1000);
digitalWrite(3,HIGH);
delay(1000);
digitalWrite(3,LOW);
duration = pulseIn(4,HIGH);
distance = (duration*0.0343)/2;
Serial.println(" distance:");
Serial.println(distance);
