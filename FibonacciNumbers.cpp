#include <iostream>
using namespace std;


void IterativeFibonacciSerie(int count)
{
    int n0 = 0;
    int n1 = 1;
    int n2 = 0;

    for (int i = 0; i < count; i++)
    {
        if (i == 0 || i == 1)
        { 
            cout << i << " ";
        }
        else
        {
            n2 = n0 + n1;
            n0 = n1;
            n1 = n2;

            cout << n2 << " ";
        }
    }
}

int RecursiveFibonacciSerie(int count)
{
    if ((count == 0 || count == 1))
    {
        return count;
    }
    else
    {
        return RecursiveFibonacciSerie(count-1) + RecursiveFibonacciSerie(count-2);
    }
}

int main(int argc, char const *argv[])
{
    int count;
    cout << "Pick a length of Fibbonacci serie: ";
    cin >> count;
    cout << "Fibbonacci serie iterative:   ";
    IterativeFibonacciSerie(count);
    
    int i = 0;
    cout << endl << "Fibbonacci serie recursively: ";;
    while (i<count)
    {
        cout << RecursiveFibonacciSerie(i) << " ";
        i++;
    }
    
    return 0;
}
