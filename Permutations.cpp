#include <bits/stdc++.h>
using namespace std;


void permute(string aString, int startIndex, int endIndex)
{
	// Base case
	if (startIndex == endIndex)
    {
		cout<<aString<<endl;
    }
        
	else
	{
		// Permutations made
		for (int i = startIndex; i <= endIndex; i++)
		{
			// Swapping done
			swap(aString[startIndex], aString[i]);
			// Recursion called
			permute(aString, startIndex+1, endIndex);
			// Back tracking
			swap(aString[startIndex], aString[i]);
		}
	}
}

int main()
{
	string str = "halo";
	int n = str.size();
    permute(str, 0, n-1);
	return 0;
}
