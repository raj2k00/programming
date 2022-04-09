#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 3;
    cout << "Guess the number to win (1 - 10)" << endl
         << "Only 3 chances" << endl;
    do
    {
        cout << "Enter the number" << endl;
        cin >> guess;
        guessCount--;
    } while (secretNum != guess && guessCount != 0);

    if (guessCount)
    {
        cout << "You win the Guessing game" << endl;
    }
    else
    {
        cout << "You Lose!";
    }

    return 0;
}