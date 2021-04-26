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