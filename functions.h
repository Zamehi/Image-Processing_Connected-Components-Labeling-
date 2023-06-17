#include <iostream>
#include "Linked_List.h"

using namespace std;


// ****************************************************************************
// Distinct elements for 1d array
int countDistinct(int arr[], int n)
{
	int res = 1;

	// Pick all elements one by one
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;

		// If not printed earlier, then print it
		if (i == j)
			res++;
	}
	return res;
}

// ****************************************************************************
// Store distinct for 1d array
int* countDistinct(int arr[], int n, int res)
{
	int index = 1;
	int check = 1;
	int* arr1 = new int[res];
	arr1[0] = arr[0];

	// Pick all elements one by one
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				check = 1;
				break;
			}
			else
			{
				check = 0;
			}
		}
		if (check == 0)
		{
			arr1[index] = arr[i];
			index++;
		}

	}
	return arr1;
}


// ****************************************************************************
// Finding means

int means(int* arr, int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		m = m + arr[i];
	}
	m = m / size;
	//cout << "m " << m << endl;
	return m;
}


// ****************************************************************************
// True Positive
double true_p(int** arr1, int** arr2, int row, int col)
{
	// arr1 is ground truths
	double tp = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//cout << "Ground " << arr1[i][j] << ",  baad wali" << arr2[i][j] << endl;;
			if ((arr1[i][j] == 255) && (arr2[i][j] == 255))
			{
				//cout << "Ground " << arr1[i][j] << ",  baad wali" << arr2[i][j];
				tp++;
				//cout << "yes" << endl;
			}

		}
	}
	cout << "tp is " << tp << endl;
	return tp;
}



// ****************************************************************************
// False Positive
double false_p(int** arr1, int** arr2, int row, int col)
{
	// arr1 is ground truths
	double fp = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j] == 0 && arr2[i][j] == 255)
			{
				fp++;
			}
		}
	}
	cout << "fp is " << fp << endl;
	return fp;
}



// ****************************************************************************
// False Negative
double false_n(int** arr1, int** arr2, int row, int col)
{
	// arr1 is ground truths
	double fn = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j] == 255 && arr2[i][j] == 0)
			{
				fn++;
			}
		}
	}
	cout << "fn is " << fn << endl;
	return fn;
}


// ****************************************************************************
// Swap

int** Swap(int** arr1, int row, int col, int value1, int swap_with)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j] == value1)
			{
				arr1[i][j] = swap_with;
			}
		}
	}
	return arr1;
}


//  ***************************************************************************
int* distinct_frequency(int** arr, int row, int col, int* lesions, int res)

{
	int* arr2 = new int[res];
	int k = 0;
	for (int i = 0; i < res; i++)
	{
		int count = 0;
		for (int m = 0; m < row; m++)
		{
			for (int n = 0; n < col; n++)
			{
				if (arr[m][n] == lesions[i])
				{
					count++;
				}
			}
		}
		arr2[k] = count;
		k++;
	}
	return arr2;
}


// ****************************************************************************
int distinct_number(int** arr1, int row, int col)
{

	int res = 0;
	//int p = 0;
	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			int check = 0;
			int t;

			int  p = i;
			t = j - 1;
			while (p <= i && p >= 0)
			{

				for (t; t >= 0; t--)
				{


					if (arr1[i][j] == arr1[p][t])
					{

						check = 1;
						break;
					}
					else
					{
						check = 0;
					}
				}
				if (check == 1)
				{
					break;
				}

				p--;
				t = col - 1;
			}
			if (check == 0)
			{
				res++;

			}



		}


	}
	//cout << "distinct elements are" << res << endl;
	return res;
}


// ****************************************************************************
int* distinct_elements(int** arr2, int r, int c, int res)
{
	//int count = 0;
	int k = 1;
	int check = 0;
	int* lesions = new int[res];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int check = 0;
			for (int t = 0; t < k; t++)
			{
				if (lesions[t] == arr2[i][j])
				{
					check = 1;
					break;
				}
				else
				{
					check = 0;
				}
			}
			if (check == 0)
			{
				lesions[k - 1] = arr2[i][j];
				k++;
			}
		}

	}
	//cout << endl;
	//cout << "The number of elements of distinct elements is ";
	//for (int i = 0; i < res; i++)
	//{
	//	cout << lesions[i] << " ,";
	//}
	return lesions;
}


// ****************************************************************************
int maximum(int* arr, int res, int* arr2)
{
	int index = 0;
	int max;
	max = arr[1];
	for (int i = 2; i < res; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	return arr2[index];
}


// ****************************************************************************
int** keep_element(int** arr, int row, int col, int max)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] != max)
			{
				arr[i][j] = 0;
			}
		}
	}
	return arr;
}


// ****************************************************************************
// saming labels

int** label_checker(int** arr1, int row, int col)
{
	int label = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			if (arr1[i][j] != 0) // Check the surroundings for the labels of elements.
			{
				// CORNERS
				if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
				{
					// checking index in corners
					// First corner 
					if (i == 0 && j == 0)
					{
						arr1[i][j] = label;
						label++;
					}

					// Checking the rows and columns of edges
					// Row above all   + 2nd corner 
					else if (((i == 0) && (j > 0 && j < col - 1)) || (i == 0 && j == col - 1))
					{
						if (arr1[i][j - 1] != 0)
						{
							arr1[i][j] = arr1[i][j - 1];  // --------------------- 4
							//label++;
						}
						else
						{
							arr1[i][j] = label;
							label++;
						}
					}

					// Row on left     +   3rd corner 
					else if (((j == 0) && (i > 0 && i < row - 1)) || (j == 0 && i == row - 1)) // row on left
					{
						if (arr1[i - 1][j] != 0)   // ---------------------- 2
						{
							arr1[i][j] = arr1[i - 1][j];
							//label++;
						}
						else if (arr1[i - 1][j + 1] != 0)  // --------------- 3
						{
							arr1[i][j] = arr1[i - 1][j + 1];
							//label++;
						}
						else
						{
							arr1[i][j] = label;
							label++;
						}

					}

					// Row on right    +   4th corner 
					else if (((j == col - 1) && (i > 0 && i < row - 1)) || (i == row - 1 && j == col - 1))
					{
						if (arr1[i][j - 1] != 0)  // -------------------- 4
						{
							arr1[i][j] = arr1[i][j - 1];
							//label++;
						}
						else if (arr1[i - 1][j] != 0) // ----------------- 2
						{
							arr1[i][j] = arr1[i - 1][j];
							//label++;
						}
						else if (arr1[i - 1][j - 1] != 0) // -------------- 1
						{
							arr1[i][j] = arr1[i - 1][j - 1];
							//label++;
						}
						else
						{
							arr1[i][j] = label;
							label++;
						}
					}

					else
					{
						arr1[i][j] = label;
						label++;
					}

				}
				// Mid elements
				else // Check for mid elements of the array
				{
					// Checking for the mid elements
					if (arr1[i - 1][j + 1] != 0)  // ------------------ 3
					{
						arr1[i][j] = arr1[i - 1][j + 1];
						//label++;;
					}

					else if (arr1[i][j - 1] != 0) // ------------------- 4
					{
						arr1[i][j] = arr1[i][j - 1];
						//label++;
					}
					else if (arr1[i - 1][j] != 0) // -------------------- 2
					{
						arr1[i][j] = arr1[i - 1][j];
						//label++;
					}
					else if (arr1[i - 1][j - 1] != 0) // ----------------- 4
					{
						arr1[i][j] = arr1[i - 1][j - 1];
						//label++;;
					}
					else
					{
						arr1[i][j] = label;
						label++;
					}
				}

			}
			else
			{
				//cout << "No change" << endl;
			}
		}
	}
	return arr1;

}


// ****************************************************************************
// Equilvalences 

int** equivalence(int** arr1, int row, int col)
{
	int label = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			if (arr1[i][j] != 0) // Check the surroundings for the labels of elements.
			{
				// CORNERS
				if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
				{
					// 4th corner 
					if (i == row - 1 && j == col - 1)
					{

					}
					// Akhri line ka code + 3rd corner 
					else if (((i == row - 1) && (j > 0 && j < col - 1)) || (j == 0 && i == row - 1))     // akhri line ka code
					{
						if (arr1[i][j + 1] != 0 && arr1[i][j] != arr1[i][j + 1])// ------------------------ 1
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i][j + 1]);
						}
					}
					// Row on left + 1st corner
					else if (((j == 0) && (i > 0 && i < row - 1)) || (i == 0 && j == 0))// row on left
					{
						if (arr1[i][j + 1] != 0 && arr1[i][j] != arr1[i][j + 1])// ------------------------ 1
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i][j + 1]);
						}
						else if (arr1[i + 1][j] != 0 && arr1[i + 1][j] != arr1[i][j]) // ----------------------- 3
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j]);
						}
						else if (arr1[i + 1][j + 1] != 0 && arr1[i + 1][j + 1] != arr1[i][j])
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j + 1]); // ------------------- 4
						}


					}
					// Row on right + 
					else if (((j == col - 1) && (i > 0 && i < row - 1)) || (i == 0 && j == col - 1))
					{
						if (arr1[i + 1][j - 1] != 0 && arr1[i + 1][j - 1] != arr1[i][j])// ------------------- 2
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j - 1]);
						}
						else if (arr1[i + 1][j] != 0 && arr1[i + 1][j] != arr1[i][j]) // ----------------------- 3
						{
							arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j]);
						}
					}
				}
				// Mid elements
				else // Check for mid elements of the array
				{
					// Checking for the mid elements

					if (arr1[i][j + 1] != 0 && arr1[i][j] != arr1[i][j + 1])        // ------------------- 1
					{
						arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i][j + 1]);
					}
					else if (arr1[i + 1][j - 1] != 0 && arr1[i + 1][j - 1] != arr1[i][j])   // ------------------- 2
					{
						arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j - 1]);
					}
					else if (arr1[i + 1][j] != 0 && arr1[i + 1][j] != arr1[i][j])       // ------------------- 3
					{
						arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j]);
					}
					else if (arr1[i + 1][j + 1] != 0 && arr1[i + 1][j + 1] != arr1[i][j]) // ------------------ 4
					{
						arr1 = Swap(arr1, row, col, arr1[i][j], arr1[i + 1][j + 1]);
					}
				}
			}
			else
			{
				//cout << "No change" << endl;
			}
		}

	}
	return arr1;
}


// ****************************************************************************
//                                  TASK  1
// ****************************************************************************
int** task1(int** arr1, int row, int col)
{

	int label = 1;

	//*******************************************************************************************
	//                                            LABEL ARRAY
	int** arr2 = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr2[i] = new int[col];
	}

	//*******************************************************************************************
	//                                      |   __   |_  ___ |  
	//                                      |__ |_|_ |_| |__ |
	//*******************************************************************************************
	// Connecting all the components with the same label

	arr2 = label_checker(arr1, row, col);

	// ******************************************************************************************
	//                                        EQUIVALENCE
	arr2 = equivalence(arr1, row, col);

	// ******************************************************************************************


	int res = distinct_number(arr2, row, col) - 1;
	int* elements = new int[res];
	elements = distinct_elements(arr2, row, col, res);
	int* frequency = new int[res];
	frequency = distinct_frequency(arr2, row, col, elements, res);

	int max = maximum(frequency, res, elements); // Counting maximum pixels of which element
	int** final_arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		final_arr[i] = new int[col];
	}
	final_arr = keep_element(arr1, row, col, max);

	//*******************************************************************************************
	// CHECKING FOR THE NUMBER OF ONLY LABEL

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (final_arr[i][j] != 0)
			{
				final_arr[i][j] = 255;
			}
		}

	}


	return final_arr;
}




// ****************************************************************************
//                                  TASK 2
// ****************************************************************************

int** task2(int** array, int row, int col)
{



	// Considering two random higher and lower centroids
	int k1 = 20;
	int k2 = 200;



	// making arrays to store respective cordinates of k1 and k2 clusters
	int* k1_x = new int[row * col];

	int* k1_y = new int[row * col];

	int* k2_x = new int[row * col];

	int* k2_y = new int[row * col];

	// ******************************************************************
	//                             CENTROIDS

	int ind1 = 0, ind2 = 0;
	int diff1 = 0, diff2 = 0;
	int mean1 = 0, mean2 = 0;
	int x1 = 2, y1 = 1, x2 = 3, y2 = 3;
	int check = 1;
	while (check == 1)
	{
		ind1 = 0;
		ind2 = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				// Finding euclidean distance
				diff1 = k1 - array[i][j];
				if (diff1 < 0)
				{
					diff1 = diff1 * (-1);
				}
				//diff1 = abs(diff1);

				diff2 = k2 - array[i][j];
				if (diff2 < 0)
				{
					diff2 = diff2 * (-1);
				}
				//diff2 = abs(diff2);

				// Storig element in the array of the nearest centroid
				if (diff1 < diff2)
				{
					k1_x[ind1] = array[i][j];
					ind1++;

				}
				else if (diff1 > diff2)
				{
					k2_x[ind2] = array[i][j];// = i;
					ind2++;
				}
			}
		}
		mean1 = means(k1_x, ind1);
		mean2 = means(k2_x, ind2);
		if ((mean1 == k1) && (mean2 == k2))
		{
			break;
		}
		k1 = mean1; k2 = mean2;
	}

	int res1 = countDistinct(k1_x, ind1);
	int* elements1 = new int[res1];
	elements1 = countDistinct(k1_x, ind1, res1);
	for (int p = 0; p < res1; p++)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (array[i][j] == elements1[p])
				{
					array[i][j] = 255;
				}
			}
		}
	}
	//cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (array[i][j] != 255)
			{
				array[i][j] = 0;
			}
		}
	}
	delete[]k1_x;
	delete[]k1_y;
	delete[]k2_x;
	delete[]k2_y;
	return array;
}




// ****************************************************************************
//                                   TASK 3
// ****************************************************************************






// ****************************************************************************
//                                  TASK 4
// ****************************************************************************
List* task4(int** array, int row, int col, List *l)
{
	// ************************************************************************
	//                            ARRAY OF CLUSTERS
	List* l1 = new List[row];
	int pixel_check = 0;
	int list_index = 0;
	int list_index2 = 0;
	int i = 0;
	

	// ************************************************************************
	//                      CHECKING FOR CONSECUTIVE PIXELS

	for (i; i < row; i++)
	{
		int j = 0, list_index2 = 0;
		//cout << "i is  " << i << endl;
		while (j < col)
		{
			if (array[i][j] != 0)
			{
				pixel_check = -1;
				l1[list_index].insert(list_index2, j + 1);
				list_index2++;
				if (array[i][j + 1] != 0)
				{
					//j++;
					while (array[i][j] != 0 && j < col)
					{

						j++;
						//cout << array[i][j];
					}
					l1[list_index].insert(list_index2, j);
					list_index2++;
					j++;
				}

				else
				{
					l1[list_index].insert(list_index2, j + 1);
					list_index2++;
					j++;
				}
				/*l1[list_index].insert(list_index2, j-1);
				list_index2++;*/

				pixel_check = -1;
			}
			else
			{
				j++;
			}


		}
		if (pixel_check == 0)
		{
			l1[list_index].insert(list_index2, -1);
		}
		else if (pixel_check == -1)
		{
			l1[list_index].insert(list_index2, -1);
		}
		list_index++;
	}

	// ************************************************************************
	//                                OUTPUT 
	cout << "The data of an array of linked list array is " << endl;
	for (int i = 0; i < row; i++)
	{
		l1[i].display();
		cout << "_________________" << endl;
	}

	return l1;
}

