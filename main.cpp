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

	int l, u; // lower and upper bounds respectively

	std::cout << "Please enter L: ";
	std::cin >> l;

	std::cout << "Please enter U: ";
	std::cin >> u;

	print_interval(l,u);

	return 0;
}