#include "TestLibrary.h"

TestLib::TestLib(bool displayMsg) {
  // Anything you need when instantiating your object goes here
  _msg = displayMsg;
}

// this is our 'begin' function
void TestLib::begin(int baudRate) {
  Serial.begin(baudRate);
  if (_msg) {
    Serial.println("TestLib constructor instantiated (created) successfully.");
  }
}

// Pretend this is one or more complex and involved functions you have written
long TestLib::getRandomNumber() {

  unsigned long specialNumber = random(5, 1000);

  specialNumber *= getPi();

  specialNumber -= 5;

  return specialNumber;

}

// Private method for this class
float TestLib::getPi() {
  return 3.1415926;
}

