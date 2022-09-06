/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Maryash
Assignment: Lab 2C

Takes an index and value in stdin and if the index is within range
of 0 to the length of an array of data (from [0, 10) ) and will update
the array. Elsewise it will break the loop
*/


#include <iostream>

int main()
{

	int fib[60];
	// first two terms are given
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 60; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (int i = 0; i<60;i++) {
		std::cout << fib[i] << std::endl;

		/*When the fibonacci entries increase towards the two billions,
		the numbers start to become inaccurate and become negative. It's because
		the numbers become so big, they cannot be expressed by that amount of bits.
		and they start to become inaccurately expressed. */
	}

	return 0;
}