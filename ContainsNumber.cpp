#include <iostream>
#include <string>
using namespace std;


void containsNumber(int A, int B)
{
    string strA = to_string(A);
    string strB = to_string(B);
    
    for (int i = 0; i < strB.length(); i++)
    {
        if (strB[i] != strA[0])
        {
            continue;
        }
        else
        {
            cout << B << " contains the number " << A;
        }
    }

}

int main(int argc, char const *argv[])
{
    containsNumber(5, 541);
    return 0;
}
