/*
==========================================================================
Temperature Converter

Author: Abhishek
Language: C++
Repository: Polyglot-Calculators

Description:
A menu-driven program that converts temperatures
between Celsius, Fahrenheit, and Kelvin.

Conversions Supported:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
==========================================================================
*/

#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);
double celsiusToKelvin(double c);
double kelvinToCelsius(double k);

int main() {

    int choice;
    double value;

    do {
        cout << "\n===== Temperature Converter =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter temperature value: ";
            cin >> value;
        }

        switch(choice) {

            case 1:
                cout << "Result: " << celsiusToFahrenheit(value) << " F\n";
                break;

            case 2:
                cout << "Result: " << fahrenheitToCelsius(value) << " C\n";
                break;

            case 3:
                cout << "Result: " << celsiusToKelvin(value) << " K\n";
                break;

            case 4:
                if(value < 0) {
                    cout << "Error: Kelvin cannot be negative.\n";
                } else {
                    cout << "Result: " << kelvinToCelsius(value) << " C\n";
                }
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 5);

    return 0;
}


// Function definitions

double celsiusToFahrenheit(double c) {
    return (c * 9/5) + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5/9;
}

double celsiusToKelvin(double c) {
    return c + 273.15;
}

double kelvinToCelsius(double k) {
    return k - 273.15;
}
