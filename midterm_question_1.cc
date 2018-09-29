/*
Question 1:
Write a program to read numbers from the user and put it in an array.
Ask for the array size before you ask for the actual numbers. Print the array. 
*/

#include <iostream>
using namespace std;

void printArray(int[], int);

int main()
{
	cout << "How long would you like the array to be?" << endl;
	int SIZE;
	cin >> SIZE;

	int array[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Please enter the value for element " << i << endl;
		int element;
		cin >> element;
		array[i] = element;
	}

	printArray(array, SIZE);



}

void printArray(int array[], int size)
{
	cout << "The array printed looks like:" << endl;
	for (int i = 0; i < size; i++)
	{
		if (i < size)
		{
			cout << array[i] << ", ";
		}
	
	}
	cout << endl;

}