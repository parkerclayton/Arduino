
int ledPin = 13; //assigns the ledpin variable to output 13

void setup() {
  Serial.begin(9600); //data transmission rate
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String value = Serial.readString();
    if (value == "ramrod") {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
    Serial.println(value);
  }
  delay(1000);
}
