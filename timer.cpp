/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "timer.h"
#include <iostream>
void Timer::start() {
	 this->startTime = std::chrono::system_clock::now();
}
void Timer::stop() {
	this->endTime = std::chrono::system_clock::now();
	this->elapsedSeconds = this->endTime - this->startTime;
}
void Timer::timeInterval(int startSize, int times, int samples, int sortFunc) {
	this->size = samples;
	Algoritm alg = Algoritm();
	Generation gen = Generation();
	double totalTime = 0;
	std::cout << "Quicksort\nN\tT[s]\tStdev[s]\tSamples" << std::endl;
	for (int i = 1; i <= times; i++) {
		for (int x = 1; x <= samples; x++) {
			gen.randomValues(startSize*i);
			switch (sortFunc) {
				case 0:
					this->start();
					alg.quickSort(gen.dataArray, 0, gen.size - 1, false);
					this->stop();
			}
			totalTime += this->elapsedSeconds.count();
			this->serie.push_back(this->elapsedSeconds.count());
		}
		this->avg = totalTime / this->size;
		this->stdDev = alg.getStandardDeviation(this->serie, this->avg);
		std::cout << startSize * i << "\t" << this->avg << "\t" << this->stdDev << "\t" << this->size << std::endl;
		this->serie.clear();
	}	
}