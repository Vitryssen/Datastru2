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
class Algoritm {
public:
	//Insertion sort Knuth https://en.wikipedia.org/wiki/Insertion_sort
	void insertionSort(int arr[], int size);
	//Selection sort Knuth https://en.wikipedia.org/wiki/Selection_sort
	void selectionSort(int arr[], int size);
	void swap(int* xp, int* yp);
	//Quicksort Pivot i partitioneringssteget är höger element. Hoare
	//Quicksort Pivot enligt median-of-three. Hoare
	//std::sort
	//Others
	bool isMonotonic(bool rising, int arr[], int size);
};
#endif