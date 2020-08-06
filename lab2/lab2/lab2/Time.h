#pragma once

#include <iostream>
#include "Output.h"

using namespace std;

struct Time
{
	int Year;
	int Month;
	int Day;
	// 0 - 23
	int Hour;
	int Minute;
	int Second;
};

void ReadTime(Time& event);
void PrintTime(Time& event);
void DemoTime();