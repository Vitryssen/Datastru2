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
	
	auto random = [](int N) {std::vector<int>* data = randomValues(N); return data; };
	auto increasing = [](int N) {std::vector<int>* data = monotonicIncreasing(N); return data; };
	auto decreasing = [](int N) {std::vector<int>* data = monotonicDecreasing(N); return data; };
	auto constant = [](int N) {std::vector<int>* data = constantValue(N); return data; };

	int start = 1000;
	int end = 5000;

	time_all(random, start, end, 500);
	return 0;
}