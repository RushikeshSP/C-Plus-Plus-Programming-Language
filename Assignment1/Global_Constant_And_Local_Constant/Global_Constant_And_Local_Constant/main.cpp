/*

Que 4: Write a c++ program to illustrate global constant and local constant.
Owner: Rushikesh Sanjay Pokharkar
Batch: PPA9

*/

//                      *********  Solution  *********

#include <iostream> // Including Necessary Header Files

//const int a = 10; // Gives error for (*prt)++; as a is an global variable which is in RoData(Read only).

int main()
{
	const int a = 10; // Constant integer local variable

	int* ptr = const_cast<int*> (&a); // Integer pointer typecasted to store address using const_cast.

	std::cout << "The value of a is: " << a << std::endl;

	(*ptr)++; // Value changed using pointer.

	std::cout << "The value of a is: " << a << std::endl;
	std::cout << "The value of *ptr is: " << *ptr << std::endl;

	return 0;
}