#include <iostream>
#include "functions.h"
using namespace std;

int main() 
{
	int row=5; int col=5;

	// From task1
	int** segmented = new int* [row];
	for (int i = 0; i < col; i++) 
	{
		segmented[i] = new int[col];
	}

	segmented = task1(segmented, row, col);// change to the array read by image
	// From task 2
	int** original = new int* [row];
	for (int i = 0; i < col; i++)
	{
		original[i] = new int[col];
	}
	original = task2(original, row, col); // change to the array



}