// RandomNumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()
using namespace std;

int main() {

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0))); 
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1; 
    int guess;

    cout << "This is a Random Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
