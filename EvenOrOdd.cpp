#include <iostream>
using namespace std;

/*
Given an integer value, implement a method that returns 
if it is an even number or an odd number. 
*/

void CheckEvenOrOdd(float number)
{
    float decimals = number - (int)number;
    if (decimals != 0 || (int)number % 2 != 0)
    {
        cout << "The number is ODD!" << endl;
    }
    else
    {
        cout << "The number is EVEN!" << endl;
    }
}

int main()
{
    float aNumber;
    cout << "Pick any number: " << endl;
    cin >> aNumber;
    CheckEvenOrOdd(aNumber);
    return 0;
}