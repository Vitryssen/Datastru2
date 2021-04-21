/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "algoritms.h"
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

	// One by one move boundary of unsorted subarray 
	for (int i = 0; i < size - 1; i++)
	{
		// Find the minimum element in unsorted array 
		min_idx = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]);
	}
}