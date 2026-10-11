//Write a program that calculates a car’s gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank. 
// It should then calculate and display the number of miles per gallon the car gets.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables to store gallons and miles
    double gallons, miles, mpg;

    // Request the number of gallons the car can hold
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons;

    // Request the number of miles it can be driven on a full tank
    cout << "Enter the number of miles it can be driven on a full tank: ";
    cin >> miles;

    // Calculate the miles per gallon
    mpg = miles / gallons;

    // Display the result (2 decimals)
    cout << fixed << setprecision(2);
    cout << "\nThe car gets " << mpg << " miles per gallon." << endl;

    return 0;
}
