#include <iostream>
using namespace std;

/*
Write a program with a collection and reverse the collection before 
presenting it to the user. 

CONSTRAINTS:  
Do not use any STL functionality, you may use a string as the collection. 
*/


void swapReference(char& a, char& b)
{
    int tmp = a;
    a = b;
    b = tmp; 
}


void reverseString(string& aString, int n, int i)
{   
    if (n<=i){return;}
    swapReference(aString[i], aString[n]);
    reverseString(aString, n-1, i+1);
}


int main(int argc, char const *argv[])
{
    string word;
    cout << "Enter a word: " << endl;
    cin >> word;
    reverseString(word, word.length()-1, 0);
    cout << "The reversed word: " << word << endl;
    return 0;
}