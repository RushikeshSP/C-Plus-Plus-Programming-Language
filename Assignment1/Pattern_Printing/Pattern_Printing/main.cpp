/*

Que 5: Write a c++ program to print a given pattern:
		1
		2 3
		4 5 6
		7 8 9 10
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream> // Including Necessary Header Files


int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num; // Input Number of rows you want to print in pattern.

	// Logic to print pattern.
	for (int i = 1; i <= num; i++)
	{
		int j = i;
		static int num = i;
		while (j--)
		{
			std::cout << num << " ";
			num++;
		}
		std::cout << std::endl;
	}
	
	return 0;
}