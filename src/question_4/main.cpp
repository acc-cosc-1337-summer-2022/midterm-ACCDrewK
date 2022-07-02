#include "question4.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double celsius{0.0};
    cout << "\nCelsius to Fahrenheit Converter\n" << endl;
    cout << "This program will convert a temperature in degrees Celsius to degrees Fahrenheit." << endl;
    cout << "Enter the temperature in °C in the prompt below; to quit the program, enter a non-numeric value." << endl;
    do
    {
        cout << "\nEnter celsius: ";
        cin >> celsius;
        if (!cin.fail()) /* Program should end if user enters a non-numeric value */
        {
            cout << "Temperature in Fahrenheit: " << get_fahrenheit(celsius) << endl;
        }
    } while (!cin.fail());
    return 0;
}