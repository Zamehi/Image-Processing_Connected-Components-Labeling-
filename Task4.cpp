#include <iostream>
#include "functions.h"
#include "Linked_List.h"
using namespace std;

int main() 
{
	int array[5][5] = { {0, 0, 0, 255, 255}, {255, 0, 0, 255, 0}, {255, 0, 255, 255, 0}, {0, 255 , 255, 255,0},{0, 255, 255, 255, 0} };
	int row= 5,  col= 5;
	List* l1 = new List[row];
	int pixel_check = 0;
	int list_index = 0;
	int list_index2 = 0;
	int i = 0;
	for ( i ; i < row; i++) 
	{
		int j = 0, list_index2 =0;
		//cout << "i is  " << i << endl;
		 while (j<col)
		 {
			if (array[i][j] != 0) 
			{
				pixel_check = -1;
				l1[list_index].insert(list_index2, j+1);
				list_index2++;
				if (array[i][j + 1] != 0) 
				{
					//j++;
					while (array[i][j] != 0&& j< col)
					{
						
						j++;
						cout << array[i][j];
					}
					l1[list_index].insert(list_index2, j );
					list_index2++;
					j++;
				}
				
				else 
				{
					l1[list_index].insert(list_index2, j+1);
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

	// Couting data 
	cout << "The data of an array of linked list array is " << endl;
	for (int i = 0; i < row; i++) 
	{
		l1[i].display();
		cout << "_________________"<< endl;
	}
}