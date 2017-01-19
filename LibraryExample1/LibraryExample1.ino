#include <TestLibrary.h>

TestLib testlib(true);

void setup() {
  // put your setup code here, to run once:

  testlib.begin(9600);
  randomSeed(analogRead(A0));

}

void loop() {
  // put your main code here, to run repeatedly:
  long rndNo = testlib.getRandomNumber();
  
  // This cannot be done - it is PRIVATE
  //float test = testlib.getPi();

  Serial.println(rndNo);

  delay(2000);
}



