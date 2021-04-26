/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "timer.h"
#include <iostream>
void time_all(std::vector<int>* (*generate_data_funk)(int size), int start, int end)
{
	std::string fileName1 = "insertionSort.data";
	std::string fileName2 = "selectionSort.data";
	std::string fileName3 = "quickSort.data";
	std::string fileName4 = "quickSortMed.data";
	std::string fileName5 = "stdSort.data";
	auto insSort = [](std::vector<int>* random) {insertionSort(random); };
	auto selSort = [](std::vector<int>* random) {selectionSort(random); };
	auto qSort = [](std::vector<int>* random) {quickSort(random, 0, random->size()-1, false); };
	auto qSortMed = [](std::vector<int>* random) {quickSort(random, 0, random->size() - 1, true); };
	//auto sort_funk5 = [](std::vector<int>* random) {std::sort(random->begin(), random->end()); };

	for (int N = start; N <= end; N += 1000)
	{
		auto container = generate_data_funk(N);
		time_calculation(insSort, container, fileName1);
		//container = generate_data_funk(N);
		//time_calculation(selSort, container, fileName2);
		//container = generate_data_funk(N);
		//time_calculation(qSort, container, fileName3);
		//container = generate_data_funk(N);
		//time_calculation(qSortMed, container, fileName4);
		//container = generate_data_funk(N);
		//time_calculation(sort_funk5, container, fileName5);
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

}
float time(void(*sort)(std::vector<int>*), std::vector<int>* vector)
{

	std::chrono::duration<double, std::milli> time(0);

	auto start = std::chrono::steady_clock::now();
	sort(vector);
	auto end = std::chrono::steady_clock::now();
	time += (end - start);

	return time.count();
}