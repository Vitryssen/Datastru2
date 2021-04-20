/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "timer.h"
void Timer::start() {
	 this->startTime = std::chrono::system_clock::now();
}
void Timer::stop() {
	this->endTime = std::chrono::system_clock::now();
	elapsed_seconds = endTime - startTime;
}