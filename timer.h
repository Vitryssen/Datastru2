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
#include "time.h"
#include <cmath>
#include <algorithm>
#include <string>
#include <chrono>
#include <iostream>
#include <fstream>
#include <cmath>
#include "generation.h"
#include "algoritms.h"
#include "output.h"
//void timeInterval(void(), int startSize, int times, int samples, int sortFunc);
void time_all(std::vector<int>* (*generate_data_funk)(int size), int start, int end);
void time_calculation(void(*sort_funk)(std::vector<int>*), std::vector<int>* container, std::string save_data);
float time(void(*sort)(std::vector<int>*), std::vector<int>* container);
#endif