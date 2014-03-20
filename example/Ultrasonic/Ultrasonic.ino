#include <Myardulib.h>
//初始化超声波模块，接收端（Echo）接4号口，控制端（Trig）接5号口
Ultr ultra(4,5);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
Serial.println(ultra.getdist());
delay(100);
}

