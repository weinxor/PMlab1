#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

const int numberOfValues = 100;

int main()
{
	//reading numbers in numbers Vector
	ifstream inputFile;
	inputFile.open("input.txt");

	vector<int> values;
	values.reserve (numberOfValues * sizeof (int));

	int currentValue;

	for (int i = 0; i < numberOfValues; ++i) {
		inputFile >> currentValue;
		values.push_back (currentValue);
	};

	inputFile.close();

	//sorting values

	sort (values.begin (), values.end ());

	//preprocessing the data 


	system ("pause");
    return 0;
}

