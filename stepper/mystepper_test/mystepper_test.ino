
/*************************************************************
Motor Shield Stepper

*************************************************************/

int delaylegnth = 150;

void setup() {

  //establish motor direction toggle pins
  pinMode(12, OUTPUT); //CH A -- HIGH = forwards and LOW = backwards
  pinMode(13, OUTPUT); //CH B -- HIGH = forwards and LOW = backwards

  //establish motor brake pins
  pinMode(9, OUTPUT); //brake (disable) CH A
  pinMode(8, OUTPUT); //brake (disable) CH B


}

void loop(){
 // 0. A forwards, B Forwards
  digitalWrite(9, LOW);  //ENABLE CH A
        //digitalWrite(8, HIGH); //DISABLE CH B
  digitalWrite(12, HIGH);   //Sets direction of CH A
  analogWrite(3, 255);   //Moves CH A

        //digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B
  digitalWrite(13, HIGH);   //Sets direction of CH B
  analogWrite(11, 255);   //Moves CH B
  delay(delaylegnth);
  


// 1.  A backwards, B Forwards
  digitalWrite(9, LOW);  //ENABLE CH A
        //digitalWrite(8, HIGH); //DISABLE CH B
  digitalWrite(12, LOW);   //Sets direction of CH A
  analogWrite(3, 255);   //Moves CH A

        //digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B
  digitalWrite(13, HIGH);   //Sets direction of CH B
  analogWrite(11, 255);   //Moves CH B
  delay(delaylegnth);

  
//2. A backwards, B Backwards
  digitalWrite(9, LOW);  //ENABLE CH A
        //digitalWrite(8, HIGH); //DISABLE CH B
  digitalWrite(12, LOW);   //Sets direction of CH A
  analogWrite(3, 255);   //Moves CH A

        //digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B
  digitalWrite(13, LOW);   //Sets direction of CH B
  analogWrite(11, 255);   //Moves CH B
  delay(delaylegnth);

 //3. A forwards, B Backwards
  digitalWrite(9, LOW);  //ENABLE CH A
        //digitalWrite(8, HIGH); //DISABLE CH B
  digitalWrite(12, HIGH);   //Sets direction of CH A
  analogWrite(3, 255);   //Moves CH A

        //digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B
  digitalWrite(13, LOW);   //Sets direction of CH B
  analogWrite(11, 255);   //Moves CH B
  delay(delaylegnth);


 //4. A forwards, B Forwards
 digitalWrite(9, LOW);  //ENABLE CH A
        ///digitalWrite(8, HIGH); //DISABLE CH B
  digitalWrite(12, HIGH);   //Sets direction of CH A
  analogWrite(3, 255);   //Moves CH A

        //digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B
  digitalWrite(13, HIGH);   //Sets direction of CH B
  analogWrite(11, 255);   //Moves CH B
  delay(delaylegnth);





}
