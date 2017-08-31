#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>

#include "GenerateDataInput.h"

using namespace std;

void GenerateDataInputTest() {
	GenerateDataInput<int> *gdInt = new GenerateDataInput<int>();
	gdInt->generateDataInput("inputInt1.txt", 500, 1000, 500, INT_MAX);
	gdInt->generateDataInput("inputInt2.txt", 1000, 500, 1000, INT_MAX);
	gdInt->generateDataInput("inputInt3.txt", 1000, 1000, 1000, INT_MAX);

	GenerateDataInput<long long> *gdLong = new GenerateDataInput<long long>();
	gdLong->generateDataInput("inputLong1.txt", 500, 1000, 500, LLONG_MAX);
	gdLong->generateDataInput("inputLong2.txt", 1000, 500, 1000, LLONG_MAX);
	gdLong->generateDataInput("inputLong3.txt", 1000, 1000, 1000, LLONG_MAX);

	GenerateDataInput<double> *gdDouble = new GenerateDataInput<double>();
	gdDouble->generateDataInput("inputDouble1.txt", 500, 1000, 500, 1.0 * LLONG_MAX);
	gdDouble->generateDataInput("inputDouble2.txt", 1000, 500, 1000, 1.0 * LLONG_MAX);
	gdDouble->generateDataInput("inputDouble3.txt", 1000, 1000, 1000, 1.0 * LLONG_MAX);
	gdDouble->generateDataInput("inputDouble4.txt", 1000, 1000, 1000, 1.0 * LLONG_MAX);
}

int main() {

	GenerateDataInputTest();
	
	return 0;
}