// --------------------------------------------	TASK 1 ---------------------------------------------

#include <iostream>
#include "functions.h"
#include "Linked_List.h"
#include <cstring>
using namespace std;


int main()
{
	/*string ground_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD002_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD004_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD015_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD017_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD018_lesion.bmp" ,"C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD019_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD020_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD021_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD022_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD024_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD033_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD038_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD039_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD040_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD041_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD042_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD043_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD044_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD050_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD075_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD078_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD091_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD118_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD139_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD140_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD144_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD149_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD169_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD171_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD177_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD206_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD211_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD243_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD328_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD331_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD339_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD376_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD379_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD386_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD394_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD395_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD396_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD427_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD429_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD432_lesion.bmp"};
	string segmented_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD002.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD004.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD015.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD017.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD018.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD019.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD020.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD021.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD022.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD024.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD033.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD038.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD039.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD040.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD041.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD042.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD043.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD044.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD050.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD075.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD078.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD091.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD118.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD139.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD140.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD144.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD149.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD169.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD171.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD177.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD206.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD211.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD243.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD328.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD331.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD339.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD376.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD379.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD386.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD394.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD395.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD396.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD427.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD429.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD432.bmp" };
	string original_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD002.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD004.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD015.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD017.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD018.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD019.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD020.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD021.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD022.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD024.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD033.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD038.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD039.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD040.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD041.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD042.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD043.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD044.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD050.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD075.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD078.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD091.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD118.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD139.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD140.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD144.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD149.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD169.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD171.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD177.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD206.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD211.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD243.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD328.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD331.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD339.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD376.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD379.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD386.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD394.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD395.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD396.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD427.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD429.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD432.bmp" };*/

	int i =0;


	int row = 5;
	int col = 5;

	int** arr1 = new int* [5];
	for (int i = 0; i < 5; i++)
	{
		arr1[i] = new int[5];
	}
	
	int label = 1;

	// *****************************************************************************************************
	//                                              INPUT
	cout << "------------------------------------Enter elements for the array---------------------------------." << endl;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cin >> arr1[i][j];
		}
	}
	
	// ******************************************************************************************************
	//                                               OUTPUT
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr1[i][j] << ", ";
		}
		cout << endl;
	}

	//******************************************************************************************************
	//                                            LABEL ARRAY
	int** arr2 = new int* [5];
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = new int[5];
	}

	//*******************************************************************************************
	//                                      |   __   |_  ___ |  
	//                                      |__ |_|_ |_| |__ |
	//*******************************************************************************************
    // Connecting all the components with the same label

	arr2 = label_checker(arr1, row, col);
	
	//*******************************************************************************************
		//                                    OUTPUT 
	cout << endl<<endl<<"The array after labelling is :" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[i][j] << ", ";
		}
		cout << endl;
	}
	
	// ******************************************************************************************
	//                                        EQUIVALENCE
	arr2 = equivalence(arr1, row, col);

	//*******************************************************************************************
		//                                    OUTPUT 
	cout << endl << endl << ":EQUIVALENCE ARRAY:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[i][j] << ", ";
		}
		cout << endl;
	}

	// ******************************************************************************************


	int res = distinct_number(arr2, row, col)-1;  
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
	final_arr =  keep_element(arr1, row, col, max);
	
	//*******************************************************************************************
	// CHECKING FOR THE NUMBER OF ONLY LABEL
	int value= 0;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			if (final_arr[i][j] != 0) 
			{
				value = final_arr[i][j];
				break;
			}
		}
		if (value != 0) 
		{
			break;
		}
	}

	//*******************************************************************************************
		//                                    OUTPUT 
	cout << endl << endl << "ARRAY AFTER KEEPING ONE LABEL" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << final_arr[i][j] << ", ";
		}
		cout << endl;
	}

	// ******************************************************************************************
	//                                     MAXIMUM LABEL 1
	final_arr = Swap(final_arr, row, col, value, 1);


	//*******************************************************************************************
		//                                    OUTPUT 
	cout << endl << endl << "ARRAY AFTER exchanging MAX LABEL" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << final_arr[i][j] << ", ";
		}
		cout << endl;
	}
	
}