/*

Que 2: Write a c++ program to find out second highest element in given array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream> // Including Necessary Header Files

int main()
{
	int num, arr[50];

	// Input number of array elements.
	std::cout << "Enter how many elements do you want in array: ";
	std::cin >> num; 

	// Input array elements.
	std::cout << "Enter Array Elements:- " << std::endl;
	for (int i = 0; i < num; i++) 
	{
		std::cin >> arr[i]; 
	}

	// Printing given array elements.
	std::cout << "Given array is : ";
	for (int i = 0; i < num; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	// Finding highest element from array.
	int high = arr[0];
	for (int i = 1; i < num; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
	}
	
	// Finding second highest element from array.
	int secHigh = arr[0];
	for (int i = 1; i < num; i++)
	{
		if (arr[i] == high)
		{
			continue;
		}
		else if (arr[i] > secHigh)
		{
			secHigh = arr[i];
		}
	}

	std::cout << "The second highest element in given array is: " << secHigh << std::endl;

	return 0;
}