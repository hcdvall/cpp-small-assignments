#include <iostream>
using namespace std;


template <typename T>
void swapReference(T& a, T& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/*
template <typename T>
T cinWhateverType()
{
    T a, b;
    cout << "Enter a first character or number: " << endl;
    cin >> a;
    cout << "Enter a second character or number: " << endl;
    cin >> b;
    return a, b;
}
*/


int main(int argc, char const *argv[])
{
    //char a = 'A';
    //char b = 'B';
    float a = 1.23;
    float b = 4.56;

    cout << a << ", " << b << endl;
    swapReference(a, b);
    cout << a << ", " << b << endl;
    return 0;
}
