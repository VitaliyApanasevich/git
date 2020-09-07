#include <iostream>
#include <time.h>
using namespace std;


void DATA();
void PROCESS(int **arr, int size);

void main() {
	srand(time(NULL));
	DATA();

}

void DATA() {
	int SIZE;
	cout << "Enter SIZE:\t"; cin >> SIZE;
	int** MATRIX = new int* [SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		MATRIX[i] = new int[SIZE];
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			MATRIX[i][j] = rand() % 7-5;
			cout << '\t' << MATRIX[i][j];
		}
		cout << endl;
	}
	cout << endl;
	PROCESS(MATRIX, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			cout << '\t' << MATRIX[i][j];
		}
		cout << endl;
		
	}
	delete[] MATRIX;
}
void PROCESS(int **arr, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] > 0) {
				cout << "String number: " << i + 1 << endl;
				if (i - 1 >= 0) {
					for (int counter = 0; counter < size; counter++)
					{
						arr[i-1][counter] *= (-1);
					}
				}
				break;
			}
		}
	}
}