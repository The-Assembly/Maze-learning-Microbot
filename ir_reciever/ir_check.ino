void setup(){
  Serial.begin(9600);
  }

void loop(){
  float sensorValue = analogRead(A0)*(5.0/1023.0);  // upto 5 meters (might vary depending on the resistor connected to the Ir sensor)
  Serial.println(sensorValue);
  delay(100);
  if(sensorValue <= 300)
  Serial.println("Obstacle");
  delay(100);
  }  
