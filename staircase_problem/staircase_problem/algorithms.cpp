#include "pch.h"
#include <vector>
#include <iostream>
#include <iterator>

int num_ways_efficient(const int N, const std::vector<int> &steps) {

	std::vector<int> stairs;

	stairs.reserve(N);

	stairs.push_back(1);

	int nmb = 0;

	for (int i = 1; i <= N; ++i) {

		for (int step = 0; step < steps.size(); ++step) {

			if ( i - steps[step] >= 0)
				nmb += stairs[i - steps[step]];
		}

		stairs.push_back(nmb);

		nmb = 0;
	}

	return stairs[N];
}

int num_ways(const int N, const std::vector<int> &steps) {

	int ways = 0;

	for (int i = 0; i < steps.size(); ++i) {

		if (N - steps[i] > 0) {

			ways += num_ways(N - steps[i], steps);
		}

		else if (N - steps[i] == 0)
			++ways;
	}

	return ways;
}

int num_ways(const int N) {

	int ways = 0;

	if (N - 1 > 0) {

		ways += num_ways(N - 1);
	}


	if (N - 2 > 0) {

		ways += num_ways(N - 2);
	}

	else {

		++ways;
	}

	return ways;
}


