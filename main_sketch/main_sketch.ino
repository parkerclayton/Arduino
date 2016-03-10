//stepper variables
int delaylegnth = 20;

void setup() {
  //Stepper Motor
        //establish motor direction toggle pins
      pinMode(12, OUTPUT); //CH A -- HIGH = forwards and LOW = backwards???
      pinMode(13, OUTPUT); //CH B -- HIGH = forwards and LOW = backwards???
      
      //establish motor brake pins
      pinMode(9, OUTPUT); //brake (disable) CH A
      pinMode(8, OUTPUT); //brake (disable) CH B
  //Serial readin
    Serial.begin(9600);
  // DC Motor
    pinMode(2, OUTPUT);   //CW defined as pin 2 on arduino
    pinMode(4, OUTPUT);  //CCW defined as pin 4 on arduino 
  // Compressor
    pinMode(5, OUTPUT);
  // Pressure Valve
    pinMode(6, OUTPUT);
  
}

void loop(){
  if(Serial.available() > 0) {
  String value=Serial.readString();

// Stepper Motor
            //Forward Full Stroke
                       if (value == "f") {
                            
                              //A forwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, HIGH);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth);
                              // B backwards  
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, LOW);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B
                                delay(delaylegnth);
                              //A backwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, LOW);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth); 
                              //B Forwards
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, HIGH);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B 
                                delay(delaylegnth);
                                    
                       }
          //Backwards Full Stroke        
                       if (value == "b") {
                            
                              //A forwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, HIGH);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth);
                              // B backwards  
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, LOW);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B
                                delay(delaylegnth);
                              //A backwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, LOW);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth); 
                              //B Forwards
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, HIGH);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B 
                                delay(delaylegnth);       
                       }
           //Forward Short    
                       if (value == "fs") {
                            
                              //A forwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, HIGH);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth);
                              // B backwards  
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, LOW);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B
                                delay(delaylegnth);
                              //A backwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, LOW);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth); 
                              //B Forwards
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, HIGH);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B 
                                delay(delaylegnth);       
                       }
           //Backwards Short       
                       if (value == "bs") {
                            
                              //A forwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, HIGH);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth);
                              // B backwards  
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, LOW);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B
                                delay(delaylegnth);
                              //A backwards
                                digitalWrite(9, LOW);  //ENABLE CH A
                                digitalWrite(8, HIGH); //DISABLE CH B
                                digitalWrite(12, LOW);   //Sets direction of CH A
                                analogWrite(3, 255);   //Moves CH A
                                delay(delaylegnth); 
                              //B Forwards
                                digitalWrite(9, HIGH);  //DISABLE CH A
                                digitalWrite(8, LOW); //ENABLE CH B
                                digitalWrite(13, HIGH);   //Sets direction of CH B
                                analogWrite(11, 255);   //Moves CH B 
                                delay(delaylegnth);       
                       }

     

// Angle Motor
     
     if(value == "up") {
      digitalWrite(2,HIGH); //Motor runs clockwise//
      delay(5000); //for 1 second//
      digitalWrite(2, LOW); //Motor stops//
      Serial.println("angle motor done");
     }
     if(value == "down") {
      digitalWrite(4, HIGH);//Motor runs counter-clockwise//
      delay(5000); //For 1 second//
      digitalWrite(4, LOW); //Motor stops//
     }
     if(value == "u") {
      digitalWrite(2,HIGH); //Motor runs clockwise//
      delay(500); //for .5 seconds
      digitalWrite(2, LOW); //Motor stops//
     }
     if(value == "d") {
      digitalWrite(4, HIGH);//Motor runs counter-clockwise//
      delay(500); //For .5 second//
      digitalWrite(4, LOW); //Motor stops//
     }


//Compressor
     if(value == "cmp") {
      digitalWrite(5, HIGH); //power compressor
      delay(40000); // for one second
      digitalWrite(5, LOW); //stop compressor
      Serial.println("cmp done");
     }


//Valve
     if(value == "vlv") {
      digitalWrite(6, HIGH); //power valve
      delay(3000); // for one second
      digitalWrite(6, LOW); //stop valve
     }

//All-off
     if(value == "h") {
	digitalWrite(8, HIGH); //DISABLE CH B
	digitalWrite(9, HIGH);  //DISABLE CH A
	digitalWrite(2, LOW); //Motor stops//

}
   }
   
}



