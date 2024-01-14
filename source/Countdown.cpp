#include <iostream>

int main() {
	// Integer countdown function which counts down to 0 from given integer

	std::string user_input;
	std::cin >> user_input;

	int N = std::stoi(user_input);

	for (int i = N; i > 0; i --) {

		std::cout << i << '\n';
	}

	return 0;
}