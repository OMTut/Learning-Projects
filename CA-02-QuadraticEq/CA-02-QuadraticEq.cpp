// CA-02-QuadraticEq.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//declare variables
	double a;
	double b;
	double c;

	//prompt user for variables
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "\nEnter b: ";
	std::cin >> b;
	std::cout << "\nEnter c: ";
	std::cin >> c;

	//declaring the roots
	double root1;
	double root2;

	root1 = (-b + std::sqrt(b*b - 4 * a*c)) / (2 * a);
	root2 = (-b - std::sqrt(b*b - 4 * a*c)) / (2 * a);

	//cout
	std::cout << "Root 1 is " << root1 << "\n";
	std::cout << "Root 2 is " << root2 << "\n";
}
