const int analogInPin = A9;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(10, OUTPUT);
}

void loop() {
//  digitalWrite(10, HIGH);
  sensorValue = analogRead(analogInPin);
//  Serial.println(sensorValue);
    int a = analogRead(A11);
    Serial.println(a);
  if (sensorValue < 45) {
    int a = analogRead(A11);
    Serial.println(a);
    vibrate(a);
  }
}

void vibrate(int value) {
//      digitalWrite(10, HIGH);
  if (value < 60 && value > 10) {
    digitalWrite(10, HIGH);
    delay(400);
    digitalWrite(10, LOW);
    delay(250);
  }
  else if (value>60 && value<120) {
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    delay(300);
  }
}

