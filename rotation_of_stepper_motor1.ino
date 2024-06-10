#include<Stepper.h>
int stepsPerRev=2040;
Stepper myStepper(stepsPerRev,8,9,10,11);
void setup(){
  myStepper.setSpeed(15);
  Serial.begin(9600);
}
void loop(){
  Serial.println("Moving Forward");
  myStepper.step(stepsPerRev);
  delay(1000);
  Serial.println("Moving BackWard");
  myStepper.step(-stepsPerRev);
  delay(1000);
}
