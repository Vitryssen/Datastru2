/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#ifndef GENERATION_H
#define GENERATION_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
class Generation {
public:
	int* dataArray = 0;
	int size;
	//slumpdata ex rand
	void randomValues(int numberOfValues);
	//monotont stigande
	void monotonicIncreasing(int numberOfValues);
	//monotont fallande
	void monotonicDecreasing(int numberOfValues);
	//konstant värde
	void constantValue(int numberOfValues);
	void printArray(int[]);
};
#endif