void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
if(analogRead(A0) < 250)
Serial.println("Obstcle");
delay(100)
}
