// staircase_problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

// https://www.youtube.com/watch?v=5o-kdjv7FD0

int num_ways(const int N);

int num_ways(const int N, const std::vector<int> &steps);

int main()
{
	int N;

	std::vector<int> steps;

	steps.push_back(1);

	steps.push_back(2);

	steps.push_back(3);

	std::cout << num_ways(4) << " " << num_ways(4, steps) << std::endl;


    std::cout << "Hello World!\n"; 
}

int num_ways(const int N) {

	int ways = 0;

	if (N - 1 > 0) {

		ways += num_ways(N - 1);
	}
		

	if (N - 2 > 0) {

		ways += num_ways(N - 2);
	}

	else{

		++ways;
	}

	return ways;
}

int num_ways(const int N, const std::vector<int> &steps) {

	int ways = 0;

	bool a = false;

	for (int i = 0; i < steps.size(); ++i) {

		if (N - steps[i] > 0) {

			ways += num_ways(N - steps[i], steps);
		}

		else {

			a = true;
		}
	}

	if (a)
		++ways;

	return ways;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
