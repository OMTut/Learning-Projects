//
// Created by tuttle on 3/2/20.
//
#include <iostream>

using std::cin; using std::cout;

int main() {

    int year = 0;

    cout << "Enter year: ";
    cin >> year;

    //validate y is 4 digits
    if (year < 1000 || year > 9999) {
        cout << "Invalid. Year must be 4 digits.";
    }
    //run the math
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " falls on a leap year.\n";
    }
    else {
        cout << year << " is not a leap year.\n";
    }

}