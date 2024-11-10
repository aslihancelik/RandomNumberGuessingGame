// RandomNumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program generates a random number between 1 and 100 and asks the user to guess the number. 
// It provides feedback for each guess, indicating whether the guess is too high or too low. 
// The game continues until the user correctly guesses the random number. 
// The program also keeps track of the number of guesses the user makes and displays the total count 
// when the correct number is guessed.
//
// Programmer: Aslihan Aria Celik

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
    int guessCount = 0; // Initialize guess count to 0

    cout << "This is the Random Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        guessCount++; // Increment guess count with each guess

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "It took you " << guessCount << " guesses." << endl; // Display the number of guesses
        }
    } while (guess != randomNumber);

    return 0;
}
