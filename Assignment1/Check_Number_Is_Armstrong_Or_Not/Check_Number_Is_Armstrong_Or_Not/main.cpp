/*

Que 1: Write a C++ program to check whether a number is Armstrong number or Not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream>// Including Necessary Header Files

int main()
{

	int num, result = 0, temp, count = 0; // Necessary variables
	std::cout << "Enter a Number: "; 
	std::cin >> num; // Taking input from user.
	
	temp = num;
	while (temp > 0) // While loop to count the length of number.
	{
		count++;
		temp = temp / 10;
	}

	temp = num;
	// Logic to check number is armstrong number.
	while (temp > 0) 
	{
		int rem = temp % 10;
		int cube = 1;
		for (int i = 0; i < count; i++)
		{
			cube = cube * rem;
		}
		result = result + cube;
		temp = temp / 10;
	}

	if (result == num)
	{
		std::cout << "The given number " << num << " is an Armstrong Number." << std::endl;
	}
	else
	{
		std::cout << "The given number " << num << " is NOT an Armstrong Number." << std::endl;
	}

	return 0;
}