#include <iostream> // include the input/output stream library
using namespace std; // use the standard namespace

int main() { // main function
    double temp; // temperature is a needs to be a decimal number
    char unit; // takes the user input for the unit's temperature
    
    cout << "Temperature Converter" << endl; // display the title of the program
    cout << "Enter the temperature: "; // ask the user to enter the temperature
    cin >> temp; // store the temperature in the variable temp
    cout << "Enter the unit (F for Fahrenheit, C for Celsius, and K for Kelvin): "; // ask the user to enter the unit
    cin >> unit; // store the unit in the variable unit

    if (unit == 'F') { // if the unit is Fahrenheit
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl; // convert Fahrenheit to Celsius
        cout << "Kelvin: " << (temp - 32) * 5 / 9 + 273.15 << endl; // convert Fahrenheit to Kelvin
    } else if (unit == 'C') { // if the unit is Celsius
        cout << "Fahrenheit: " << temp * 9 / 5 + 32 << endl; // convert Celsius to Fahrenheit
        cout << "Kelvin: " << temp + 273.15 << endl; // convert Celsius to Kelvin
    } else if (unit == 'K') { // if the unit is Kelvin
        cout << "Fahrenheit: " << (temp - 273.15) * 9 / 5 + 32 << endl; // convert Kelvin to Fahrenheit
        cout << "Celsius: " << temp - 273.15 << endl; // convert Kelvin to Celsius
    } else { // if the unit is not Fahrenheit, Celsius, or Kelvin
        cout << "Invalid unit" << endl; // display an error message
    }

    return 0;
}