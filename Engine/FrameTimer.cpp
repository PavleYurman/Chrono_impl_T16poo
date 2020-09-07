#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now(); // ob zagonu dobimo zacetni cas
}

float FrameTimer::Mark()
{
	auto old = last;
	last = steady_clock::now(); // posodabljamo last z zadnjim casom
	duration<float> frame_time = last - old;
	return frame_time.count(); // dobimo cas prejsnjega frama/prikaza slike(cas ki je pretekel od zacetka prejsnjega
								//do zacetka trenutnega frama)
}
