#ifndef FlowMeter_h
#define FlowMeter_h
#include <Arduino.h>

class FlowMeter {
public:
  FlowMeter(uint8_t);
  void setup();
  float Measure();
private:
  uint8_t PIN;
  long currentMillis = 0;
  long previousMillis = 0;
  int period = 0;
  int interval = 1000;
  const float calibrationFactor = 4.5;
  size_t pulse1Sec = 0;
  float flowRate;
  unsigned int flowMilliLitres;
  unsigned long totalMilliLitres;
};

#endif