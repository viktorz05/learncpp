#include <iostream>

int main() {

	int garbage;
	int y = 5;
	[[maybe_unused]] char a;

	std::cout << "Uninitialized value: " << garbage << " Initialized value of y: " << y << std::endl;
	return 0;
}