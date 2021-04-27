/*
2021-04-27
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#ifndef ALGORITMS_H
#define ALGORITMS_H
#include <climits>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
/// <summary>
/// Insertion sort Knuth https://en.wikipedia.org/wiki/Insertion_sort
/// Sorts a vector with insertionsort
/// </summary>
/// <param name="vector">pointer to vector to be sorted</param>
void insertionSort(std::vector<int>* vector);

/// <summary>
/// Selection sort Knuth https://en.wikipedia.org/wiki/Selection_sort
/// Sorts a vector with selectionsort
/// </summary>
/// <param name="vector">pointer to vector to be sorted</param>
void selectionSort(std::vector<int>* vector);

/// <summary>
/// Sorts a given vector with quicksort with pivot options
/// </summary>
/// <param name="vector">pointer to vector</param>
/// <param name="low">start point of vector</param>
/// <param name="high">end point of vector</param>
/// <param name="median">true/false to use median-of-three as pivot</param>
void quickSort(std::vector<int>* vector, int low, int high, bool median);

/// <summary>
/// Get pivot index from given vector with pivot options
/// </summary>
/// <param name="vector">pointer to vector</param>
/// <param name="low">start of vector</param>
/// <param name="high">end of vector</param>
/// <param name="median">true/false to use median-of-three as pivot</param>
/// <returns>Index of partition point</returns>
int partition(std::vector<int>* vector, int low, int high, bool median);

/// <summary>
/// Get median value from 3 points in vector
/// </summary>
/// <param name="low">start of vector</param>
/// <param name="vector">pointer to vector</param>
/// <param name="high">end of vector</param>
/// <returns>Median of three value</returns>
int medianPivot(int low, std::vector<int>* vector, int high);
#endif