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
/// <summary>
/// Get time for all sorting algoritms
/// </summary>
/// <param name="generate_data_funk">function to use when generating data to sort</param>
/// <param name="start">start of vector</param>
/// <param name="end">end of vector</param>
/// <param name="increment">number of elements to add for each loop</param>
void time_all(std::vector<int>* (*generate_data_funk)(int size), int start, int end, int increment);

/// <summary>
/// Get times for a given sorting algoritm and generate output
/// </summary>
/// <param name="sort_funk">function to use when sorting</param>
/// <param name="vector">vector with values to sort</param>
/// <param name="save_data">string with filename to use as output</param>
void time_calculation(void(*sort_funk)(std::vector<int>*), std::vector<int>* vector, std::string save_data);

/// <summary>
/// Get time for a given sorting algoritm and vector with generated data
/// </summary>
/// <param name="sort">sorting function to use</param>
/// <param name="vector">vector with generated values</param>
/// <returns>time taken to sort vector</returns>
float time(void(*sort)(std::vector<int>*), std::vector<int>* vector);
#endif