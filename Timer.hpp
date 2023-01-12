#pragma once
#include "./Common.h"
class Timer 
{
public:
	static bool onTimer(time_t num, int id)
	{
		static time_t beginTime[10] = { 0 };
		int endTime = clock();
		if (endTime - beginTime[id] >= num) 
		{
			beginTime[id] = endTime;
			return true;
		}
		return false;
	}
};
