/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Maryash
Assignment: Lab 2A

Takes a number in as input through std::cin and will check if 
the number is such that the number, x, 0 < x < 100. If the number
doesn't meet the criteria, it will ask for the number until it qualifies.
When it does, it will print the number squared via cmath's pow(). 
*/

#include <iostream>
#include <cmath>

int main()
{
	
	int num = -1; // var for number from std cin
	// given an invalid value so if it doesn't pass through
	// it will go back into the loop

	std::cout << "Please enter an integer: ";
	std::cin >> num; // taking initial input

	if (! (0 < num && num < 100)) { // if the # is ineligable
		while(true) {
			/* will take input and repeatedly take in a # 
			until it's such that 0 < num < 100, 
			when it fits the criteria, it will break */
			std::cout << "Please re-enter: ";
			std::cin >> num;

			if((0 < num && num < 100)) { // if # fits criteria
				break;
			} // elsewise it will continue
		}
	}
	
	// prints output regardless of whether or not
	// it enters in the loop
	std::cout << "Number squared is " << std::pow(num, 2) << std::endl;

	return 0;
}