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
/// <summary>
/// Generates random values
/// </summary>
/// <param name="numberOfValues">number of values to generate</param>
/// <returns>pointer to vector with generated values</returns>
std::vector<int>* randomValues(int numberOfValues);

/// <summary>
/// Generates monotonic increasing values starting from 0
/// </summary>
/// <param name="numberOfValues">number of values to generate</param>
/// <returns>pointer to vector with generated values</returns>
std::vector<int>* monotonicIncreasing(int numberOfValues);

/// <summary>
/// Generates monotonic decreasing values starting from INT_MAX
/// </summary>
/// <param name="numberOfValues">number of values to generate</param>
/// <returns>pointer to vector with generated values</returns>
std::vector<int>* monotonicDecreasing(int numberOfValues);

/// <summary>
/// Generates constant values, first value given from rand()
/// </summary>
/// <param name="numberOfValues">number of values to generate</param>
/// <returns>pointer to vector with generated values</returns>
std::vector<int>* constantValue(int numberOfValues);
#endif