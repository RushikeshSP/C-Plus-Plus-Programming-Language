/*

Que 3: Write a c++ program to check whether given string is palindrome or not.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream> // Including Necessary Header Files

int main()
{
	char arr[50], rev[50];
	int count = 0;

	// Taking input string using fgets function.
	std::cout << "Enter a string: ";
	fgets(arr, sizeof(arr), stdin);

	// Printing given string.
	std::cout << "Given String is: " << arr << std::endl;

	// Count length of string.
	while (arr[count] != '\n')
	{
		count++;
	}
	count--;

	// Logic to reverse the given string.
	int i = 0;
	while (count >= 0)
	{
		rev[i] = arr[count];
		i++, count--;
	}
	rev[i] = '\0';
	
	// Printing reversed string.
	std::cout << "Reversed String is: " << rev << std::endl;

	// Check for given string are palindrome or not.
	int flag = 0;
	i = 0;
	while (arr[i] != '\n')
	{
		if (arr[i] != rev[i])
		{
			flag = 1;
			break;
		}
		i++;
	}

	// Print Output 
	if (flag == 0)
	{
		std::cout << "The given string is Palindrome." << std::endl;
	}
	else
	{
		std::cout << "The given string is NOT Palindrome." << std::endl;
	}

	return 0;
}