/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
/*
std::chrono::ur<chrono>.
En mätserie för varje indata måste bestå av minst 5 tidsmätningar. Fler är bättre. Ju fler mätningar desto mindre mätfel.
Vanliga misstag är
•Sorteringen tar för vissa små indata för kort tid för att tidsmätningen ska ge ett riktigt värde. 
	Ofta är klockan inte tillräckligt noggrann för att mäta korta tidsintervall.
•Man försöker sortera indata som redan sorterats. Detta påverkar påtagligt flera av metodernas tidsmätningar.
•Man mäter inte endast sorteringssteget utan även initierande program-kod. 
	En vanlig fallgrop är att kopiera dataserien till sorteringsfunktionenistället för att ge pekare eller iteratorer till serien.
*/
#ifndef TIMER_H
#define TIMER_H
#include <chrono>
#include "algoritms.h"
#include "generation.h"
#include <vector>
class Timer {
	public:
		std::chrono::time_point<std::chrono::system_clock> startTime;
		std::chrono::time_point<std::chrono::system_clock> endTime;
		std::chrono::duration<double> elapsedSeconds;
		double avg;
		double stdDev;
		int size;
		std::vector<double> serie;
		void start();
		void stop();
		void timeInterval(int startSize, int times, int samples, int sortFunc);
};
#endif