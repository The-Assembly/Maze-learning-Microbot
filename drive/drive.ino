/**
* Bruno Santos, 2013
* feiticeir0@whatgeek.com.pt
* Small code to test DC motors - 2x with a L298 Dual H-Bridge Motor Driver
* Free to share
**/

//Testing the DC Motors with
// L293D

//Define Pins
//Motor A
int ENA = 5;
int IN1 = 6;
int IN2 = 7;
 
//Motor B
int ENB = 8;
int IN3 = 9;
int IN4 = 10;

void setup() {
  
  Serial.begin (9600);
  //configure pin modes
  pinMode (ENA, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);  
  
  pinMode (ENB, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT); 
}

void loop() {

char ch = Serial.read();

switch (ch) {
Serial.println(ch);
case '1': //both wheels move forward
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
analogWrite(ENA, 255);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(ENB, 255);
//delay(300);
//analogWrite(ENA, 0);
//analogWrite(ENB, 0);
break;

case '2': //both wheels move back
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
analogWrite(ENA, 255);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite(ENB, 255);
//delay(2*300);
//analogWrite(ENA, 0);
//analogWrite(ENB, 0);
break;

case '3': //stop
analogWrite(ENA, 0);
analogWrite(ENB, 0);
}
}

