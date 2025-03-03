#ifndef Eeprom_hpp
#define Eeprom_hpp

#include <Preferences.h>

Preferences preferences;

// Import Controllable Variables

extern float MAX_pH;
extern float MIN_pH;
extern float MAX_EC;
extern float MIN_EC;
extern float Cycle_time;
extern float Water_temp_Setpoint;
extern float Kp;
extern float Ki;
extern float Kd;
extern float Time_Pump_OFF;     //mins
extern float Time_Pump_ON;
extern bool Process_ON;
extern float Minimum_Level;
extern bool Pump_State;
extern bool Heater;

void SaveSettings() {
  preferences.begin("Code", false);
  preferences.putFloat("MAX_EC", MAX_EC);
  preferences.putFloat("MIN_pH", MIN_pH);
  preferences.putFloat("MAX_pH", MAX_pH);
  preferences.putFloat("MIN_EC", MIN_EC);
  preferences.putFloat("Cycle_time", Cycle_time);
  preferences.putFloat("Water_Setpoint", Water_temp_Setpoint);
  preferences.putFloat("Kp", Kp);
  preferences.putFloat("Ki", Ki);
  preferences.putFloat("Kd", Kd);
  preferences.putFloat("Time_Pump_OFF", Time_Pump_OFF);
  preferences.putFloat("Time_Pump_ON", Time_Pump_ON);
  preferences.putBool("Process_ON", Process_ON);
  preferences.putFloat("Minimum_Level", Minimum_Level);
  preferences.putBool("Pump_State", Pump_State);
  preferences.putBool("Heater", Heater);
  preferences.end();
}

void LoadSettings() {
  preferences.begin("Code", false);
  MAX_EC = preferences.getFloat("MAX_EC", MAX_EC);
  MIN_pH = preferences.getFloat("MIN_pH", MIN_pH);
  MAX_pH = preferences.getFloat("MAX_pH", MAX_pH);
  MIN_EC = preferences.getFloat("MIN_EC", MIN_EC);
  Cycle_time = preferences.getFloat("Cycle_time", Cycle_time);
  Water_temp_Setpoint = preferences.getFloat("Water_Setpoint", Water_temp_Setpoint);
  Kp = preferences.getFloat("Kp", Kp);
  Ki = preferences.getFloat("Ki", Ki);
  Kd = preferences.getFloat("Kd", Kd);
  Time_Pump_OFF = preferences.getFloat("Time_Pump_OFF", Time_Pump_OFF);
  Time_Pump_ON = preferences.getFloat("Time_Pump_ON", Time_Pump_ON);
  Process_ON = preferences.getBool("Process_ON", Process_ON);
  Minimum_Level = preferences.getFloat("Minimum_Level", Minimum_Level);
  Pump_State = preferences.getBool("Pump_State", Pump_State);
  Heater = preferences.getBool("Heater", Heater);
  preferences.end();
}

void ResetSettings() {

  //Restaouring

  preferences.begin("Code", false);

  preferences.putFloat("MAX_EC", 2400);
  preferences.putFloat("MIN_pH", 5.5);
  preferences.putFloat("MAX_pH", 5.8);
  preferences.putFloat("MIN_EC", 1000);
  preferences.putFloat("Cycle_time", 60);
  preferences.putFloat("Water_Setpoint", 15);
  preferences.putFloat("Kp", 4.0);
  preferences.putFloat("Ki", 0.2);
  preferences.putFloat("Kd", 1);
  preferences.putFloat("Time_Pump_OFF", 30);
  preferences.putFloat("Time_Pump_ON", 30);
  preferences.putBool("Process_ON", false);
  preferences.putFloat("Minimum_Level", 2.0);
  preferences.putBool("Pump_State", false);
  preferences.putBool("Heater", false);
  //

  MAX_EC = preferences.getFloat("MAX_EC", MAX_EC);
  MIN_pH = preferences.getFloat("MIN_pH", MIN_pH);
  MAX_pH = preferences.getFloat("MAX_pH", MAX_pH);
  MIN_EC = preferences.getFloat("MIN_EC", MIN_EC);
  Cycle_time = preferences.getFloat("Cycle_time", Cycle_time);
  Water_temp_Setpoint = preferences.getFloat("Water_Setpoint", Water_temp_Setpoint);
  Kp = preferences.getFloat("Kp", Kp);
  Ki = preferences.getFloat("Ki", Ki);
  Kd = preferences.getFloat("Kd", Kd);
  Time_Pump_OFF = preferences.getFloat("Time_Pump_OFF", Time_Pump_OFF);
  Time_Pump_ON = preferences.getFloat("Time_Pump_ON", Time_Pump_ON);
  Process_ON = preferences.getBool("Process_ON", Process_ON);
  Minimum_Level = preferences.getFloat("Minimum_Level", Minimum_Level);
  Pump_State = preferences.getBool("Pump_State", Pump_State);
  Heater = preferences.getBool("Heater", Heater);
  preferences.end();}


#endif