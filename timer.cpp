/*
2021-04-27
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "timer.h"
#include <iostream>
void time_all(std::vector<int>* (*generate_data_funk)(int size), int start, int end, int increment)
{
	std::vector<std::string> fileNames = { "insertionSort.data", "selectionSort.data", "quickSort.data", "quickSortMed.data", "stdSort.data"};
	clearFiles(fileNames);
	auto insSort = [](std::vector<int>* vector) {insertionSort(vector); };
	auto selSort = [](std::vector<int>* vector) {selectionSort(vector); };
	auto qSort = [](std::vector<int>* vector) {quickSort(vector, 0, vector->size()-1, false); };
	auto qSortMed = [](std::vector<int>* vector) {quickSort(vector, 0, vector->size() - 1, true); };
	auto stdSort = [](std::vector<int>* vector) {std::sort(vector->begin(), vector->end()); };

	for (int N = start; N <= end; N += increment)
	{
		auto container = generate_data_funk(N);
		time_calculation(insSort, container, fileNames[0]);
		time_calculation(selSort, container, fileNames[1]);
		time_calculation(qSort, container, fileNames[2]);
		time_calculation(qSortMed, container, fileNames[3]);
		time_calculation(stdSort, container, fileNames[4]);
		delete container;
	}


}

void time_calculation(void(*sort_funk)(std::vector<int>*), std::vector<int>* container, std::string fileName)
{
	double samples = 5;
	double squareTime = 0;
	double totalTime = 0;
	double avgTime;
	double stdDev;
	double dif_time;

	for (int i = 0; i < samples; i++)
	{
		auto current_time = time(sort_funk, container);
		totalTime += current_time;
		squareTime += pow(current_time, 2);
	}

	avgTime = totalTime / samples;
	dif_time = pow(totalTime, 2) / samples;
	stdDev = sqrt((squareTime - dif_time) / (samples - 1));


	std::string output = std::to_string(container->size()) + "\t" + std::to_string(avgTime) + "\t" + std::to_string(stdDev) + "\t#" + std::to_string(samples) + "\n";
	write(fileName, output);
}
float time(void(*sort)(std::vector<int>*), std::vector<int>* vector)
{

	std::chrono::duration<double, std::milli> time(0);
	auto copy_vector = *vector;

	auto start = std::chrono::steady_clock::now();
	sort(&copy_vector);
	auto end = std::chrono::steady_clock::now();
	time += (end - start);

	return time.count();
}