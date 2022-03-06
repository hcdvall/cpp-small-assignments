#include <iostream>
using namespace std;


bool isLuckyNumber(int digit)
{
    int remainderArray[10];
    int count = 0;
    bool lucky = true;

    for (int i = 0; i < 10; i++)
    {
        if (((float)digit)/10 < 1)
        {
            remainderArray[i] = digit%10;
            count += 1;
            break; 
        }
        else
        {   
            remainderArray[i] = digit%10;
            digit = digit/10;
            count += 1;
        }
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count; j++)
        {
            if (remainderArray[i] == remainderArray[j+i])
            {
                lucky = false;
            }
        }
    }
    return lucky;
}


int main(int argc, char const *argv[])
{
    int inputNumber = 667882;
    bool isLucky = isLuckyNumber(inputNumber);
    cout << "Number = " << inputNumber << endl;
    cout << "The number " << inputNumber;
    if (!isLucky)
    {
        cout << " is not lucky." << endl;
    }
    else
    {
        cout << " is lucky!" << endl;
    }
    return 0;
}
