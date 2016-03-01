void setup() {
  // Secup Angle motor channel
  pinMode(12, OUTPUT); //Indicates Motor channel A pin
  pinMode(9, OUTPUT);//Indicates Brake Channel A pin

}

void loop() {
    digitalWrite(12, HIGH); //forward direction
    digitalWrite(9, LOW); //Disengage the Brake 
    analogWrite(3, 255); // spin forward at full speed

    //digitalWrite(9, HIGH); //engage the brake
  }

 
  
  

