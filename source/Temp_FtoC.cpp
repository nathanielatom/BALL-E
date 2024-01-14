#include <iostream>
#include <format>

double Temp_FtoC(double F) {
	// Function to convert temperature from fehrenheit to celsius
	
	double C = (F - 32.0) * (5.0 / 9.0);

	return C;
}

int main() {
	// Print statement for Temp_FtoC

	std::string input_temp;
	std::cin >> input_temp;
	double F = std::stod(input_temp);
	double C = Temp_FtoC(F);
	std::cout << std::format("Temperature in Celsius is {} Celsius\n", C);

	return 0;
}