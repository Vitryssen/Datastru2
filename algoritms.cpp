/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "algoritms.h"
#include <iostream>
#include <chrono>
int Algoritm::medianPivot(int low, int list[], int high) {
	//Get middle index
	int mid = (low + high) / 2;
	if (list[mid] < list[low])
		swap(&list[low], &list[mid]);
	if (list[high] < list[low])
		swap(&list[low], &list[high]);
	if (list[mid] < list[high])
		swap(&list[mid], &list[high]);
	//This swaps the median to list[high] which we then use to pivot
	return list[high];
}
void Algoritm::insertionSort(int arr[], int size)
{
	int j, key;
	for (int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void Algoritm::swap(int* minimum, int* first)
{
	int temp = *minimum;
	*minimum = *first;
	*first = temp;
}
void Algoritm::quickSort(int arr[], int low, int high, bool median)
{
	if (low < high)
	{
		// pi is partitioning index, arr[pi] is now at right place
		int pi = partition(arr, low, high, median);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1, median);
		quickSort(arr, pi + 1, high, median);
	}
}
int Algoritm::partition(int arr[], int low, int high, bool median)
{
	int pivot, i;
	if (median)
	{
		pivot = medianPivot(low, arr, high); // median-of-three pivot
		i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
	}
	else
	{
		pivot = arr[high]; // right side pivot
		i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
	}

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
bool Algoritm::isMonotonic(bool rising, int arr[], int size)
{
	int prev;
	for (int i = 0; i < size; i++) {
		if (rising) {
			if (i == 0)
				prev = 0;
			if (arr[i] < prev)
				return false;
		}
		else {
			if (i == 0)
				prev = INT_MAX;
			if (arr[i] > prev)
				return false;
		}
		prev = arr[i];
	}
	return true;
}
void Algoritm::selectionSort(int arr[], int size)
{
	int min_idx;

	for (int i = 0; i < size - 1; i++)
	{
		// Find the index of the smallest value
		min_idx = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found index with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}