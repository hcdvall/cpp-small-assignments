#include <iostream>
using namespace std;

/*
Given two numbers, implement a method returning
the absolute difference between the numbers. 
*/

void absDifference(float a, float b)
{
    cout << "Number A = " << a << ", Number B = " << b << endl;
    float c = a - b;
    if (c < 0)
    {
        cout << "The absolute difference is " << c * -1 << endl;
    }
    else 
    {
        cout << "The absolute difference is " << c << endl;
    }
}

int main()
{   
    int A;
    int B;
    cout << "Input first number: " << endl;
    cin >> A;
    cout << "Input second number: " << endl;
    cin >> B; 

    absDifference(A, B);
    return 0;
}