#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


/*
Create a program that inputs two numbers, create three ways to swap its values, 
one that swaps by using STL, one that swaps by reference and one that swaps by pointers. 
*/


void swapReference(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp; 
}


void swapPointer(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp; 
}


int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;

    cout << a << ", " << b << endl;
    swap(a, b);
    swapReference(a, b);
    swapPointer(&a, &b);
    cout << a << ", " << b << endl;
    return 0;
}
