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
#include <vector>
//slumpdata ex rand
std::vector<int>* randomValues(int numberOfValues);
//monotont stigande
std::vector<int>* monotonicIncreasing(int numberOfValues);
//monotont fallande
std::vector<int>* monotonicDecreasing(int numberOfValues);
//konstant värde
std::vector<int>* constantValue(int numberOfValues);
#endif