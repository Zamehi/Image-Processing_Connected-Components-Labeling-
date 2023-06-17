#include <iostream>
//#include "functions.h"
using namespace std;


// ****************************************************************************
//                            LINKED LIST
struct Node
{
	Node* next_add;
	Node* prev_add;
	int data;
};

class List
{
private:

	Node* head;
	Node* tail;
	int size;
public:
	// Constructor
	List(Node* ptr = NULL, Node* ptr2 = NULL)
	{
		head = ptr;
		size = 0;
		tail = ptr2;
	}

	// ---------------------------------------------- INSERTION ------------------------------------
	void insert(int index, int value)
	{
		int ind = 0;
		Node* temp = new Node;
		//temp = head;
		temp->data = value;
		//cout << "my data "<< temp->data << endl;

		if (index == 0)
		{
			// --------------
			//Node* temp = new Node;		
			if (head == NULL)
			{
				head = temp;
				temp->next_add = NULL;
				tail = temp;
			}
			else
			{
				temp->next_add = head;
			}
			head = temp;
		}
		else
		{
			Node* ptr = new Node;
			Node* ptr2 = new Node;
			ptr2 = head, ptr = head;
			// Traversing
			while (ptr2->next_add != NULL)
			{
				if (ind == index)
				{
					break;
				}
				ptr2 = ptr2->next_add;
				/*if (ptr2->next_add != NULL)
				{
					ptr = ptr->next_add;

					ptr2 = ptr2->next_add;
				}*/
				ind++;

			}
			//Node* temp = new Node;
			if (ptr2->next_add == NULL) // If tail
			{
				temp->next_add = NULL;
				tail->next_add = temp;
				tail = temp;
			}
			else
			{
				temp->next_add = ptr->next_add;
				ptr->next_add = temp;
			}

			size++;

		}
	}

	// ----------------------------------------------  SEARCH  -------------------------------------
	int search(int value)
	{
		Node* ptr = new Node;
		ptr = head;
		int ind = 0;
		while (ptr->next_add != NULL)
		{
			ptr = ptr->next_add;
			ind++;
			if (ptr->data == value)
			{
				return ind;
			}

		}
		return -1;


	}

	// ----------------------------------------------  UPDATE  -------------------------------------
	bool update(int index, int value)
	{
		Node* ptr = new Node;
		ptr = head;
		int ind = 0;
		int check = 0;
		while (ptr->next_add != NULL)
		{
			ptr = ptr->next_add;
			ind++;
			if (ind == index)
			{
				ptr->data = value;
				return true;

			}
			else
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			return false;
		}

	}

	// ----------------------------------------------  DELETE  -------------------------------------
	void del(int value)
	{

		Node* temp = new Node;
		temp = head;
		Node* prev = new Node;
		int check = 0;
		//temp = head;
		while (temp->next_add->data != value)
		{
			temp = temp->next_add;
		}

		prev = temp;
		temp = temp->next_add;
		if (temp->next_add == NULL)
		{
			prev->next_add = NULL;
		}
		else
		{
			prev->next_add = temp->next_add;
		}
		delete temp;

	}

	// -------------------------------------------  Destructor  -------------------------------------
	~List(void)
	{
		Node* current = head;
		while (current != NULL)
		{
			Node* temp = current;
			current = current->next_add;
			delete temp;
		}
	}

	// -------------------------------------------  DISPLAY  ----------------------------------------
	void display()
	{
		Node* current = new Node;
		current = head;
		while (current->next_add != NULL)
		{
			cout << current->data << " ";
			if (current->next_add != NULL)
			{
				current = current->next_add;
			}
		}
		cout << current->data << " ";
		cout << endl;
	}

	// -------------------------------------------  get data  ---------------------------------------
	int get_data(int index) 
	{
		Node* ptr = new Node;
		ptr = head;
		int ind = 0;
		int check = 0;
	
		while (ptr->next_add != NULL)
		{
			
			
			if (ind == index)
			{
				return ptr->data;
			}
			ptr = ptr->next_add;
			ind++;
			
		}
		if (ptr->next_add == NULL && ind == index)
		{
			return ptr->data;
		}
		
		
	}

    // ------------------------------------------- overloaded data ----------------------------------
	void operator = (const List& D) 
	{
		this->head = D.head;
		this->tail = D.tail;
		this->size = D.size;
	}


};

