
#define MPX5010_PIN A1      // PIN на который подключен выход датчика MPX5010dp

#include "MPX5010x.h"
MPX5010x mpx5010dp(MPX5010_PIN);

void setup()
{
  mpx5010dp.init();
  Serial.begin(115200);
  delay(500);
}

void loop()
{
  mpx5010dp.check();
  String pInfo = "OverPressure: " + String(mpx5010dp.Press_mmHg, DEC) + " mmHg";
  Serial.println(pInfo);
}

