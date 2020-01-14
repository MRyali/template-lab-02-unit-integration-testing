#include <iostream>

int main(int argv, char** argc) {
	// Skip the first arg index because its the program
	for (int i = 1; i < argv; i++) {
		std::cout << argc[i];
		// PRint a whitespace after all but the last iteration
		if (i < argv - 1) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}
