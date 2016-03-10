void setup() {
//Serial readin
    Serial.begin(9600);
    pinMode(5, OUTPUT);
}

void loop() {
if(Serial.available() > 0) {
  String value=Serial.readString();
if(value == "cmp") {
      digitalWrite(5, HIGH); //power compressor
      delay(10000); // for one second
      digitalWrite(5, LOW); //stop compressor
}

else {
    digitalWrite(5, LOW);
  }
}
}
