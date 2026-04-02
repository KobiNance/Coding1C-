//Kobi Nance coding 1 spring 2026
//switch, random numbers, and while loops

//your task, create the rest of the code to say random numbers
//then run the program

#include <iostream>
#include <random>          //for random numbers
#include <ctime>        // for seeding the random numbers

using namespace std;

int main () {
    srand(time(0));    //seed the random number generator with the current time
    cout << "random numbers\n";

    cout << "our first random number is " << rand() << "\n.";

    cout << "here are ten random numbers!";

    int counter = 0;
    while(counter++ < 10) {
        cout << (rand() % 10) + 1 << endl;
    }

    // guess the number game

    // the computer picks a random number between 1 and 10 (inclusive)
    int TheNumber = rand() % 10 + 1;
    //the computer asks the player to guess that random number
    int guess = -1;
    do {
        cout << "what is your guess?\n";
    //the player guesses
    cin >> guess;
    //the computer evaluates whether the guess is
    //correct
    if(TheNumber == guess) {
        cout << "you guessed it!\n";
        return 0;

    }
    //too high
    else if(guess > TheNumber) {
    cout << "that guess is too high!\n";
    }
    //tells the player too high

    //too low
    else if (guess < TheNumber){

    cout << "that guess is too low!\n";
    }
    //tell the player too low
    //or correct
    //congradulate the player
    //let the player guess again, if it was incorrect
} while (guess != TheNumber);

    return 0;
}