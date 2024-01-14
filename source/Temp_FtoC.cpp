#include <iostream>
#include <format>

double Temp_FtoC(double F) {
	// Function to convert temperature from Fahrenheit to degrees Celsius
	
	double C = (F - 32.0) * (5.0 / 9.0);

	return C;
}

double Temp_CtoF(double C) {
	// Function to convert temperature from degrees Celsius to Fahrenheit

	double F = C * 9.0 / 5.0 + 32.0;

	return F;
}

int main() {
	// Print statement for Temp_FtoC

	std::string input_temp;
	std::cin >> input_temp;

	std::cout << "Is this in Celsius (C) or Fahrenheit (F)?";
	std::string input_unit;
	std::cin >> input_unit;

	if (input_unit == "F") {
		double F = std::stod(input_temp);
		double C = Temp_FtoC(F);
		std::cout << std::format("Temperature in degrees Celsius is {} ºC\n", C);
	}
	else if (input_unit == "C") {
		double C = std::stod(input_temp);
		double F = Temp_CtoF(C);
		std::cout << std::format("Temperature in degrees Fahrenheit is {} ºF\n", F);
	}
	else {
		std::string message = std::format("Unknown temperature unit: {}", input_unit);
		throw std::invalid_argument(message);
	}

	return 0;
}