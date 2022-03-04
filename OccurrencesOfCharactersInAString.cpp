#include <iostream>
#include <string>
#include <map>
using namespace std;



void CharacterCount(string aString)
{
    int strLen = aString.length();
    char letterArray[strLen];
    int countArray[strLen];
    char distinctArray[] = {};

    for (int i = 0; i < strLen; i++)
    {
        letterArray[i] = (char)toupper(aString[i]);
    }
    
    
    for (int i = 0; i < strLen; i++)
    {
        for (int j = 0; j < strLen; j++)
        {
            if (letterArray[i] != distinctArray[j])
            {
                distinctArray[j] = letterArray[i];
            }
        }
        cout << distinctArray[i];
    }





    for (int j = 0; j < strLen; j++)
    {
        char currentLetter = letterArray[j];
        int letterCount = 0;
        
        for (int k = 0; k < strLen; k++)
        {
            if (letterArray[k] == currentLetter)
            {
                letterCount += 1;
            }
        }
        countArray[j] = letterCount;
    }

    //for (char letter : letterArray){cout << letter << " ";}
    //cout << endl;
    //for (int count : countArray){cout << count << " ";}
}


void CharacterCount1(string aString)
{
    map<char, int> m;

    for (int i = 0; i < aString.length(); i++)
    {
        m[aString[i]]++;
    }
    cout << m[2];
    
}

int main(int argc, char const *argv[])
{   
    CharacterCount("Hello");
    
    return 0;
}
