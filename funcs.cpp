/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Maryash
Assignment: Lab 2B

utilities for main.cpp, including print_interval
*/

#include <iostream>

void print_interval(int l, int u) {
	/*prints numbers from L to U inclusive
	 returns nothing 
	
	examples
	print_interval(4, 9)
	4 5 6 7 8 9
	*/

	for(int i = l; i <= u; i++) {
		std::cout << i << " "; // prints num & space eg 4 5 6
	}

}