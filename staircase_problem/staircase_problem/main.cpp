// staircase_problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

// problem
// https://www.youtube.com/watch?v=5o-kdjv7FD0

int num_ways(const int N, const std::vector<int> &steps);

int num_ways(const int N);

int num_ways_efficient(const int N, const std::vector<int> &steps);


int main()
{
	int N;

	std::vector<int> steps;

	steps.push_back(1);

	steps.push_back(2);

	//steps.push_back(4);

	std::cout << num_ways(6) << " " << num_ways(6, steps) << " " << num_ways_efficient(6, steps) << std::endl;

    std::cout << "Hello World!\n"; 
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
