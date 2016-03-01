void setup() {
  // Secup Angle motor channel
  pinMode(12, OUTPUT); //Indicates Motor channel A pin
  pinMode(9, OUTPUT);//Indicates Brake Channel A pin
  Serial.begin(9600); //data transmission rate

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
  String value=Serial.readString();
  if (value == "up"){
    digitalWrite(12, HIGH); //forward direction
    digitalWrite(9, LOW); //Disengage the Brake 
    analogWrite(3, 255); // spin forward at full speed
    delay(3000);
    digitalWrite(9, HIGH); //engage the brake
  }
  if (value == "down"){
    digitalWrite(12, LOW); //reverse direction
    digitalWrite(9, LOW); //Disengage the Brake 
    analogWrite(3, 255); // spin backwards at full speed
    delay(3000);
    digitalWrite(9, HIGH); //engage the brake
  }
  
  }
}
