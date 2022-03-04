#include <iostream>
using namespace std;

/*
Given a decimal value representing degrees in Celsius, convert the value to Fahrenheit. 
What result do you get when you use integers instead, and why? 
Formula to convert Celsius to Fahrenheit: Celsius * 9 / 5 + 32.

Q: What result do you get when you use integers instead, and why? 
A: If I cast a float to an integer, the decimals will be "cutoff", 
   unlike using some kind of rounding which would set the float to 
   the closest integer depending on the size of the decimals.
   Rounding does not imply that the float is casted as int instead, 
   this depends on the rounding method.
*/

void ConvertCelsiusToFahrenheit(float celsiusFloat)
{
    float fahrenheitFloat = celsiusFloat * 9 / 5 + 32;
    int fahrenheitInt = celsiusFloat * 9 / 5 + 32;

    cout << "Celsius: " << celsiusFloat << ", Fahrenheit float: " << fahrenheitFloat << endl;
    cout << "Celsius: " << celsiusFloat << ", Fahrenheit integer: " << fahrenheitInt << endl;
}

int main()
{
    float celsius;
    cout << "Input degrees celsius: " << endl;
    cin  >> celsius;
    ConvertCelsiusToFahrenheit(celsius);
    return 0;
}