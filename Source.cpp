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
	Timer timer = Timer();

	Generation gen = Generation();
	gen.monotonicRising(100000);
	//gen.printArray(gen.randomArray);


	Algoritm alg = Algoritm();
	if (alg.isMonotonic(true, gen.randomArray, gen.size)) 
		std::cout << "Is monotonic" << std::endl;
	else
		std::cout << "Not monotonic" << std::endl;
	timer.start();
	alg.selectionSort(gen.randomArray, gen.size);
	timer.stop();
	//gen.printArray(gen.randomArray);

	std::cout << timer.elapsed_seconds.count() << std::endl;
}