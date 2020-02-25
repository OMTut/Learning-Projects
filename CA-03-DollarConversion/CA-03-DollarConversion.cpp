// CA-03-DollarConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {

	//declare variables
	double pesos;
	double reais;
	double soles;
	double dollars;

	//get info from user
	std::cout << "Enter the number of Colombian Pesos: ";
	std::cin >> pesos;

	std::cout << "Enter the number of Brazillian Reais: ";
	std::cin >> reais;

	std::cout << "Enter the number of Soles: ";
	std::cin >> soles;

	/*conversion to $$$
	  Pesos is 1:.052 USD
	  Reais is 1: .23 USD
	  Soles is 1: .29 USD
	*/
	dollars = (.052 * pesos) + (.23 * reais) + (.29 * soles);

	//cout
	std::cout << "US Dollars = $" << dollars;
}