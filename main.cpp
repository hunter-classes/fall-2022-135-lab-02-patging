/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Maryash
Assignment: Lab 2A

Takes 2 number in as input through std::cin and will use
print_interval from funcs.cpp to print out numbers from the lower to the 
higher inclusive
*/

#include <iostream>
#include "funcs.h"

int main() {

	/* if you wanted user input
	int l, u; // lower and upper bounds respectively

	std::cout << "Please enter L: ";
	std::cin >> l;

	std::cout << "Please enter U: ";
	std::cin >> u; */
 
 	// tests
	std::cout << "Interval from -1 to 10: ";
	print_interval(-1, 10);

	std::cout << std::endl << "Interval from 0 to 5: ";
	print_interval(0, 5);	

	std::cout << std::endl << "Interval from 1 to 1: ";
	print_interval(1, 1);
	return 0;
}