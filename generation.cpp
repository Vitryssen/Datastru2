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
	this->dataArray = new int[numberOfValues];
	for (int i = 0; i < numberOfValues; i++) {
		this->dataArray[i] = rand();
	}
}

void Generation::monotonicIncreasing(int numberOfValues)
{
	this->size = numberOfValues;
	this->dataArray = new int[numberOfValues];

	for (int i = 0; i < numberOfValues; i++) {
		if (i == 0)
			dataArray[i] = 0;
		else
			dataArray[i] = rand() % 10 + dataArray[i - 1];
	}
}

void Generation::monotonicDecreasing(int numberOfValues)
{
	this->size = numberOfValues;
	this->dataArray = new int[numberOfValues];
	for (int i = 0; i < numberOfValues; i++) {
		if (i == 0)
			dataArray[i] = INT_MAX;
		else
			dataArray[i] = dataArray[i - 1] - (rand() % 10);
	}
}

void Generation::constantValue(int numberOfValues)
{
	int constantValue = rand();
	this->dataArray = new int[numberOfValues];
	for (int i = 0; i < numberOfValues; i++)
		dataArray[i] = constantValue;
}

void Generation::printArray(int arr[])
{
	for (int i = 0; i < this->size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
