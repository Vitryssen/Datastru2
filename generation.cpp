/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "generation.h"

void Generation::randomValues(int numberOfValues)
{
	this->size = numberOfValues;
	this->randomArray = new int[numberOfValues];
	for (int i = 0; i < numberOfValues; i++) {
		this->randomArray[i] = rand();
	}
}

void Generation::monotonicRising(int numberOfValues)
{
	this->size = numberOfValues;
	this->randomArray = new int[numberOfValues];

	for (int i = 0; i < numberOfValues; i++) {
		if (i == 0)
			randomArray[i] = 0;
		else
			randomArray[i] = rand() % 10 + randomArray[i - 1];
	}
	std::cout << randomArray[size-1] << std::endl;
}

void Generation::printArray(int arr[])
{
	for (int i = 0; i < this->size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
