int delaylength = 8;

void setup() {
  //Stepper Motor
    //establish stepper direction toggle pins
    pinMode(12, OUTPUT); //CH A -- HIGH = forwards and LOW = backwards???
    pinMode(13, OUTPUT); //CH B -- HIGH = forwards and LOW = backwards???
    //establish motor brake pins
    pinMode(9, OUTPUT); //brake (disable) CH A
    pinMode(8, OUTPUT); //brake (disable) CH B

}

void loop() {
  //runs the stepper forward
  digitalWrite(9, LOW);  //ENABLE CH A
      digitalWrite(8, HIGH); //DISABLE CH B
      digitalWrite(12, HIGH);   //Sets direction of CH A
      analogWrite(3, 255);   //Moves CH A
      delay(delaylength);
      digitalWrite(9, HIGH);  //DISABLE CH A
      digitalWrite(8, LOW); //ENABLE CH B
      digitalWrite(13, LOW);   //Sets direction of CH B
      analogWrite(11, 255);   //Moves CH B
      delay(delaylength);
      digitalWrite(9, LOW);  //ENABLE CH A
      digitalWrite(8, HIGH); //DISABLE CH B
      digitalWrite(12, LOW);   //Sets direction of CH A
      analogWrite(3, 255);   //Moves CH A
      delay(delaylength);
      digitalWrite(9, HIGH);  //DISABLE CH A
      digitalWrite(8, LOW); //ENABLE CH B
      digitalWrite(13, HIGH);   //Sets direction of CH B
      analogWrite(11, 255);   //Moves CH B
      delay(delaylength);

}
