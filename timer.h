/*
2021-04-19
Andr� Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
/*
std::chrono::ur<chrono>.
En m�tserie f�r varje indata m�ste best� av minst 5 tidsm�tningar. Fler �r b�ttre. Ju fler m�tningar desto mindre m�tfel.
Vanliga misstag �r
�Sorteringen tar f�r vissa sm� indata f�r kort tid f�r att tidsm�tningen ska ge ett riktigt v�rde. 
	Ofta �r klockan inte tillr�ckligt noggrann f�r att m�ta korta tidsintervall.
�Man f�rs�ker sortera indata som redan sorterats. Detta p�verkar p�tagligt flera av metodernas tidsm�tningar.
�Man m�ter inte endast sorteringssteget utan �ven initierande program-kod. 
	En vanlig fallgrop �r att kopiera dataserien till sorteringsfunktionenist�llet f�r att ge pekare eller iteratorer till serien.
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