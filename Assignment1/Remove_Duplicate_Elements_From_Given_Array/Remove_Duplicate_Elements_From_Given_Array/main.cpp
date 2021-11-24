/*

Que 5: Write a c++ program to remove duplicate elements from given array.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream> // Including Necessary Header Files


int main()
{
	int num, arr[50];

	std::cout << "Enter how many elements do you want in given array: ";
	std::cin >> num;

	std::cout << "Enter array elements:- " << std::endl;

	for (int i = 0; i < num; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "User Entered Array is: ";
	for (int i = 0; i < num; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}