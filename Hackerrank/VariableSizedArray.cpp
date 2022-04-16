// Dynamic 2D arrays
// Website - https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // first 2 values are number of arrays and number of questions
    int n, q;
    cin >> n >> q;

    // Creating Dynamic 2D array with fixed rows and variable columns using pointer

    int **arr = new int *[n]; // fixed number of rows

    // Getting inside the loop to store the values for each rows of the 2D array

    for (int i = 0, k; i < n; ++i)
    {
        cin >> k;
        arr[i] = new int[k];

        // Getting the values of each column elements
        for (int j = 0; j < k; ++j)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the values the 2D array
    for (int i = 0, r, c; i < q; ++i)
    {
        cin >> r >> c;
        cout << arr[r][c] << endl;
    }

    return 0;
}