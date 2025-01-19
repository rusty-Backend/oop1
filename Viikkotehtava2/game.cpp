#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;


Game::Game()
{
    //Initializing game variables
    setMaxNumber();

    cout << "Constructor: "
         << maxNumber
         << " set to max number"
         << endl << endl;

    srand(time(NULL)); //Seed the random generator

    randomNumber = rand() % (maxNumber - 1) + 1; //This is how we ensure that range is not from 0 to maxnum
}


//Destructor
Game::~Game() {}



    void Game::play() {

        playerGuess = 0; //Reset counter

        cout << "Enter number between 1 and "
             << maxNumber
             << endl << endl;

        cin >> playerGuess;

        cout << endl;

        while (playerGuess != randomNumber) {

            if (playerGuess < randomNumber) {
                cout << "The number "
                     << playerGuess
                     << " is smaller than random number"
                     << endl << endl;
            }

            else {
              cout << "The number "
                    << playerGuess
                    << " is greater than random number"
                    << endl << endl;
            }

            playerGuess++;

            cout << "Enter number between 1 and "
                 << maxNumber
                 << endl << endl;

            cin >> playerGuess;

            cout << endl;

        }

        playerGuess++;

        Game::printGameresult();

    }

    void Game::setMaxNumber() {

        cout << "Please enter the maximum number: ";

        cin >> maxNumber;

        //In case of invalid input
        while (maxNumber <= 1) {
            cout << "Maximum number must be greater than 1."
                    " Please try again: ";
            cin >> maxNumber;
        }

    }





void Game::printGameresult() {
    cout << "Well done! You have guessed the random number "
         << randomNumber <<"."
         << " It took you "
         << playerGuess
         << " guesses!"
         << endl << endl;
}
