/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "algoritms.h"
#include "generation.h"
#include "output.h"
#include "timer.h"
#include <iostream>
int main() {
	srand(time(NULL));

	Timer timer = Timer();

	Generation gen = Generation();
	gen.randomValues(100000);
	//gen.printArray(gen.dataArray);


	Algoritm alg = Algoritm();
	timer.start();
	alg.insertionSort(gen.dataArray, gen.size);
	timer.stop();
	//gen.printArray(gen.dataArray);

	std::cout << timer.elapsed_seconds.count() << "s " << std::endl;
}