#include <iostream>
#include <string>
using namespace std;




void containsWord(string A, string B)
{
    char sentArray[A.length()];
    char wordArray[B.length()];
    char checkArray[B.length()];
    
    for (int i = 0; i < A.length(); i++)
    {
        sentArray[i] = A[i];
    }

    for (int i = 0; i < B.length(); i++)
    {
        wordArray[i] = B[i];
    }

    int checkCount = 0;
    for (int i = 0; i < A.length(); i++)
    {
        // Check the first letter in sought for word
        if (sentArray[i] == B[0])
        {
            // Check if it's the first letter in the sentence 
            // or if the previous letter was a whitespace
            if (i == 0 || sentArray[i-1] == ' ')
            {
                // For loop as long as the length of sought for word
                for (int k = 0; k < B.length(); k++)
                {
                    // If the the word in the sentence is followed by a whitespace
                    // or if the last entry of the word is the last enty of the sentence 
                    if(sentArray[i+B.length()] == ' ' || i+B.length() == A.length())
                    {
                        checkCount += 1;
                        checkArray[k] = sentArray[i+k];
                        //cout << sentArray[i+k];
                    }
                }
            }
        }
    }
 
    int wordSize = sizeof(wordArray)/sizeof(wordArray[0]);
    if (wordSize == checkCount)
    {
        cout << "\nThe sentence containts the word: ";
        for (char letter : checkArray)
        {
            cout << letter;
        }
    }
    else
    {
        cout << "\nThe word is not in the sentence!";
    }

}

int main(int argc, char const *argv[])
{
    string sentence = "Hello my name is Ada";
    cout << "Sentence = " << sentence << endl;
    string word = "name";
    cout << "Look for = " << word;
    //cout << "The sentence contains the word"
    containsWord(sentence, word);
    
    return 0;
}
