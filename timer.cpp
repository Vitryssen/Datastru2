/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "timer.h"
#include <iostream>
void time_all(std::vector<int>* (*generate_data_funk)(int size), int start, int end, int increment)
{
	std::string fileName1 = "insertionSort.data";
	std::string fileName2 = "selectionSort.data";
	std::string fileName3 = "quickSort.data";
	std::string fileName4 = "quickSortMed.data";
	std::string fileName5 = "stdSort.data";
	auto insSort = [](std::vector<int>* vector) {insertionSort(vector); };
	auto selSort = [](std::vector<int>* vector) {selectionSort(vector); };
	auto qSort = [](std::vector<int>* vector) {quickSort(vector, 0, vector->size()-1, false); };
	auto qSortMed = [](std::vector<int>* vector) {quickSort(vector, 0, vector->size() - 1, true); };
	auto stdSort = [](std::vector<int>* vector) {std::sort(vector->begin(), vector->end()); };

	for (int N = start; N <= end; N += increment)
	{
		auto container = generate_data_funk(N);
		time_calculation(insSort, container, fileName1);
		time_calculation(selSort, container, fileName2);
		time_calculation(qSort, container, fileName3);
		time_calculation(qSortMed, container, fileName4);
		time_calculation(stdSort, container, fileName5);
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


	std::string output = std::to_string(container->size()) + "\t" + std::to_string(avgTime) + "\t" + std::to_string(stdDev) + "\n";
	write(fileName, output);
	//K
	//selectionsort 0.000027
	write("fit.data", std::to_string(container->size())+"\t"+std::to_string(pow(container->size(), 2)*0.000027)+"\n");

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