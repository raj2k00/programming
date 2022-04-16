/*
  Problem statement -  https://www.hackerrank.com/challenges/arrays-introduction/problem
  paste the code in the code editor to see the results
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;

    int *A = new int[n]; // Dynamic Allocation of Array memory

    while (cin >> A[i++]) // Runs the loop while all the inputs are stored
        ;
    // prints the array form reverse while the n is true (n is a size of array)
    // !IMPORTANT we are decrementing the n value so once it reached 0 loop ends
    // " && n " checks whether n is true or false if fasle loop terminates
    while (cout << A[--n] << ' ' && n)
        ;

    delete[] A; // delete the array to avoid memory leak

    return 0;
}