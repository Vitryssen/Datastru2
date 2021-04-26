/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "generation.h"

std::vector<int>* randomValues(int numberOfValues)
{
	std::vector<int>* randomValues = new std::vector<int>;
	for (int i = 0; i < numberOfValues; i++) {
		randomValues->push_back(rand());
	}
	return randomValues;
}

std::vector<int>* monotonicIncreasing(int numberOfValues)
{
	std::vector<int>* monotonicIncreasing = new std::vector<int>;
	monotonicIncreasing->push_back(0);
	for (int i = 1; i < numberOfValues; i++) {
		monotonicIncreasing->push_back(rand() % 10 + monotonicIncreasing->at(i-1));
	}
	return monotonicIncreasing;
}

std::vector<int>* monotonicDecreasing(int numberOfValues)
{
	std::vector<int>* monotonicDecreasing = new std::vector<int>;
	monotonicDecreasing->push_back(INT_MAX);
	for (int i = 1; i < numberOfValues; i++) {
		monotonicDecreasing->push_back(monotonicDecreasing->at(i-1) - (rand() % 10));
	}
	return monotonicDecreasing;
}

std::vector<int>* constantValue(int numberOfValues)
{
	std::vector<int>* constantValue = new std::vector<int>;
	int value = rand();
	for (int i = 0; i < numberOfValues; i++) {
		constantValue->push_back(value);
	}
	return constantValue;
}
