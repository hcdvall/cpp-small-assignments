#include <iostream>
using namespace std;

/*
Arithmetic progression is when the difference between each successive pair of values
in a series of numbers are the same.

Given the values: 2, 4, 6, 8 the difference between is always two meaning it 
have arithmetic progression. 

Write a program with a function that returns whether a series of numbers 
have arithmetic progression or not.
*/


void arithmeticProgression(int inputArray[], int arrSize)
{
    int diff;
    int count = 1;
    
    for (int i = 0; i < arrSize; i++)
    {
        if (i == 0)
        {
            diff = inputArray[1] - inputArray[0]; 
        }
        else if (inputArray[i] - inputArray[i-1] == diff)
        {
            count++;
        }
    }

    if (count == arrSize)
    {
        cout << "Arithmetic progression: YES" << endl;
    }
    else
    {
         cout << "Arithmetic progression: NO" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int foo[] = {1, 2, 3, 4};
    int arrSize = sizeof(foo)/sizeof(foo[0]);
    arithmeticProgression(foo, arrSize);

    return 0;
}
