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

	int myData[10]; // init array

	for(int i=0;i<10;i++) { 
		myData[i] = 1; // fills myData with 1
	}

	int index, value; // initializing values for the for loop

	do {
		/* 
			While the number is valid, it will ask for an index
			and a value and if the index works, it will update the
			array, elsewise it will break the loop (that is when the
			index is invalid)
		*/

		for(int i=0; i<10;i++) {
			std::cout << myData[i] << " ";
		} // printing the array
		std::cout << std::endl; // newline

		std::cout << "Input index: ";
		std::cin >> index; 

		std::cout << "Input value: ";
		std::cin >> value; 

		if ((index < 0) || (index >= 10)) { // val out of range
			std::cout << std::endl << "Index out of range. Exit.";
			break;
		}

		myData[index] = value; // updating value


	} while(true);

	return 0;
}