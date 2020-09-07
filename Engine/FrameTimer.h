#pragma once
#include <chrono>


class FrameTimer
{
public:
	FrameTimer();
	float Mark(); // takes the current time and returns a float that indicates 
					// how much time has passed since the previous mark
private:
	std::chrono::steady_clock::time_point last;
};

