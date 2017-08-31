#pragma once

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

template <class T>
class GenerateDataInput
{
public:
	GenerateDataInput() {}
	~GenerateDataInput() {}

	void generateMatrix(int sizeRow, int sizeCol, T maxValue) {
		/* =====  GENERATE MATRIX SIZE  =====
		Rows Number: sizeRow
		Coloum Number: sizeCol
		*/
		cout << sizeRow << " " << sizeCol << endl;
		for (int i = 0; i < sizeRow; i++) {
			for (int j = 0; j < sizeCol; j++) {
				T random = (T)(maxValue * ((double)rand() / RAND_MAX));
				cout << random << " ";
			}
			cout << endl;
		}
	}

	void generateDataInput(char * fileName, int sizeN, int sizeM, int sizeP, T maxValue) {
		freopen(fileName, "w", stdout);
		generateMatrix(sizeN, sizeM, maxValue);
		generateMatrix(sizeM, sizeP, maxValue);
		fclose(stdout);
	}
};