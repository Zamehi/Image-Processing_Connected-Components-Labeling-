#include <iostream>
#include "functions.h"
#include "Linked_List.h"
using namespace std;



int main() 
{
	int row = 5;
	int col = 5;

	int array[5][5] = { {0, 233, 222, 210, 255}, {255, 1, 2, 255, 0}, {255, 40, 50, 255, 0}, {0, 60 , 99, 255,2},{0, 255, 255, 255, 0} };

	//  0     1     2     3     4

	//  0    233   222   210   255      __ 0
	// 255    1     2    255    0       __ 1
	// 255    40   50    255    0       __ 2
	//  0     60   99    255    2       __ 3
	//  0    255   255   255    0       __ 4

	// Taking two clusters 
	// For example take 255 as first cluster 

	int k1 = 255;
	
	
	int k2 = 40;
	// making arrays to store respective cordinates of k1 and k2 clusters
	List k1_x;// = new int[row * col];

	List k1_y;// = new int[row * col];
	
	List k2_x;// = new int[row * col];
	
	List k2_y;// = new int[row * col];
	

	int ind1 = 0, ind2 = 0;
	int diff1= 0, diff2 =0;
	int x1 = 2, y1 = 1, x2 = 3, y2 = 3;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{

			// Finding euclidean distance
			diff1 = k1 - array[i][j];
			diff1 = abs(diff1);
			
			diff2 = k2 - array[i][j];
			diff2 = abs(diff2);

			// Storig element in the array of the nearest centroid
			if (diff1 < diff2) 
			{
				k1_x.insert(ind1, i);// = i;
				k1_y.insert(ind1, j);// = j;
				ind1++;

				// Making a new centroid

				k1 = (k1 + array[i][j]) / 2;

			}
			else // (diff1 > diff2)
			{
				k2_x.insert(ind2, i);// = i;
				k2_y.insert(ind2, j);// = j;
				ind2++;

				//Making a new centroid

				k2 = (k2 + array[i][j]) / 2;

			}
		}
	}
	// Checking which cluster is bigger

	if (ind1 > ind2) // number of data sets in a cluster 
	{
		for (int i = 0; i < ind1; i++) 
		{
			cout << i << ", " << endl;
			cout << "x" << k1_x.get_data(i) << " y" << k1_y.get_data(i) << endl;
			array[k1_x.get_data(i)][k1_y.get_data(i)] = 1;
		}
		for (int i = 0; i < ind2; i++) 
		{
			cout << i << ", " << endl;
			cout << "x" << k2_x.get_data(i) << " y" << k2_y.get_data(i) << endl;
			array[k2_x.get_data(i)][k2_y.get_data(i)] = 0;
		}
	}
	else if (ind2 > ind1)
    {
		for (int i = 0; i < ind1; i++)
		{
			cout << i << ", " << endl;
			cout << "x" << k1_x.get_data(i) << " y" << k1_y.get_data(i) << endl;
			array[k1_x.get_data(i)][k1_y.get_data(i)] = 0;
		}
		for (int i = 0; i < ind2; i++)
		{
			cout << i << ", " << endl;
			cout << "x" << k2_x.get_data(i) << " y" << k2_y.get_data(i) << endl;
			array[k2_x.get_data(i)][k2_y.get_data(i)] = 1;
		}
	}

	// Couting the array
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << array[i][j] << " ,";
		}
		cout << endl;
	}
	k1_y.display();

} 