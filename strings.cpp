#include <bits/stdc++.h> // Including all the headers in one line

using namespace std;

// https://en.cppreference.com/w/cpp/string/basic_string
// For reference

int main()
{
    // initialization under the hood it uses char array to store the string
    string s = "Hello World";

    cout << s << endl;

    // Fill the string with certain character entirely
    //  ! use this () declaration type
    string s1(10, 'a'); // initializes s1 with 10 charcters with 'a' in it.
    cout << s1 << endl;

    // other functions
    cout << "The length of the variable s is " << s.length() << endl; // also s.size() does the same
    cout << "The character at the position 4 is " << s.at(4) << endl; // prints -> 'o'
    // s.clear(); //removes the memory for s

    // Add string with other
    string s2 = s.append(" I'm Coming"); // or declare "I'm coming in a seperate varible then append"
    cout << s2 << endl;

    string s3 = s2.substr(3, 7); // first value takes start index, second takes size of string (No. of character)
    cout << s3 << endl;

    // deletes the certain part of the string
    s3.erase(3, 4); // first value takes start index, second takes size of string (No. of character)
    cout << s3 << endl;

    int index = s2.find("I'm");
    cout << "I'm found at index " << index << endl;

    s2.replace(index, 3, "Are"); // start position, number of characters to be replaced, replace word.
    cout << s2 << endl;

    return 0;
}