/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#ifndef GENERATION_H
#define GENERATION_H
//monotont stigande
//monotont fallande
//konstant värde
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
class Generation {
public:
	//slumpdata ex rand
	int* randomArray = 0;
	int size;
	void randomValues(int numberOfValues);
	void monotonicRising(int numberOfValues);
	void printArray(int[]);
};
#endif