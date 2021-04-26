/*
2021-04-19
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
//Insertion sort Knuth https://en.wikipedia.org/wiki/Insertion_sort
void insertionSort(std::vector<int>* vector);
//Selection sort Knuth https://en.wikipedia.org/wiki/Selection_sort
void selectionSort(std::vector<int>* vector);
//Quicksort Pivot i partitioneringssteget är höger element. Hoare
void quickSort(std::vector<int>* vector, int low, int high, bool median);
int partition(std::vector<int>* vector, int low, int high, bool median);
//Quicksort Pivot enligt median-of-three. Hoare
int medianPivot(int low, std::vector<int>* vector, int high);
//std::sort
#endif