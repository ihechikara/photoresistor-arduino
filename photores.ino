int sensor = A0;
int sensorReading;
int greenLED = 7;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorReading = analogRead(sensor);
  Serial.println(sensorReading);

  if (sensorReading < 300) {
    digitalWrite(greenLED, HIGH);
  } else {
    digitalWrite(greenLED, LOW);
  }
}
