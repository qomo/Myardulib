#ifndef __MYLIB_H__
#define __MYLIB_H__

#include <Arduino.h>

/* 超声波测距模块Ultr
输入：
    inPin---输入电平端口（Di）
    outPut---输出电平端口（Di）*/
class Ultr{
public:
	Ultr(int inPin, int outPin);
	float getdist();
private:
	int _inPin, _outPin;
};
#endif