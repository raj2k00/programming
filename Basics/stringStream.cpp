#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "The great man bobby lashley";
    // string str;
    // cin >> str;
    stringstream s(str); // Breaking inputs into words using stringstream

    // creating tempory container for storing individual words
    string word;
    int count = 0;
    // we don't know how many are there but do know whats the exit case then use while loop
    // getting the each word from the stream to word variable
    while (s >> word)
    {
        cout << word << endl;
        ++count;
    }
    cout << "Total number of words are" << count;
    return 0;
}