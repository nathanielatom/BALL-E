#include <iostream>
#include <format>

double Temp_FtoC(double F) {
	// Function to convert temperature from fehrenheit to celsius
	
	double C = (F - 32) * (5/9);

	return C;
}

void main() {
	// Print statement for Temp_FtoC

	double F << std::stod(std::cin);

	double C = Temp_FtoC(F);

	std::cout << std::format("Temperature in Celsius is {} Celsius\n", C);
}