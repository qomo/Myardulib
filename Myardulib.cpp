#include "Myardulib.h"
#include <Arduino.h>

/* 超声波测距函数模块Ultr
输入：
    inPin---输入（接收）电平端口（Di）
    outPut---输出（控制）电平端口（Di）*/
Ultr::Ultr(int inPin, int outPin)
{
	pinMode(inPin, INPUT);
	pinMode(outPin, OUTPUT);
	_inPin = inPin;
	_outPin = outPin;
}

float Ultr::getdist()
{
/* 获得距离数据
输出：
    整型-距离（单位:cm） */
	digitalWrite(_outPin,LOW); //使发出发出超声波信号接口低电平2μs
	delayMicroseconds(2);
	digitalWrite(_outPin,HIGH); //使发出发出超声波信号接口高电平10μs，这里是至少10μs
	delayMicroseconds(10);
	digitalWrite(_outPin,LOW);    //保持发出超声波信号接口低电平
	float distance =pulseIn(_inPin, HIGH);  //读出脉冲时间
	distance= distance/58.0;   //将脉冲时间转化为距离（单位：厘米）

	return distance;
}