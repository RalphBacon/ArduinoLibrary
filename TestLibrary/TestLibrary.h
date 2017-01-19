#ifndef tl
#define tl

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class TestLib  {
  public:
    // Constructor 
    TestLib(bool displayMsg=false);

    // Methods
    void begin(int baudRate=9600);
    long getRandomNumber();

  private:
    bool _msg;
    float getPi();
};
#endif
