#include <iostream>
#include <stdio.h>
#include "buffered_input.h"
int main() {

	std::cout << "Enter a number: ";
	int n{};
	std::cin >> n;

	std::cout << "You entered: " << n << '\n';
	
	buffered_io();

}