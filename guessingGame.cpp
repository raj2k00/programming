#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7; // Secret Number
    int guess;         // Max Guess Count
    int guessCount = 3;

    cout << "Guess the number to win (1 - 10)" << endl // Helper text about the game
         << "Only 3 chances" << endl;

    /*  Breaks the loop when the guess is correct or guess limit reached
      Do While loop decrements guessCount value for wrong guesses */

    do
    {
        cout << "Enter the number" << endl;
        cin >> guess;

        guessCount--;
    } while (secretNum != guess && guessCount != 0);

    // Prints the OUTPUT when the loop breaks
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