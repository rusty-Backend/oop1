#include <iostream>
#include <ctime>

using namespace std;

int game(int);

int main()
{
    //Initialize dialog variables

    bool dialog1 = true;
    int dialogoption;

    int maxnum;

    //Main dialog screen, start, exit

    while (dialog1 = true) {

        cout << "Please select: " << endl << endl << "1. Start the game" << endl << endl << "2. Exit" << endl << endl;

        cin >> dialogoption;

            //Game started, ask for range

            if (dialogoption == 1) {

                cout << endl<< "Please enter maximum number for random number generator: " << endl << endl;

                cin >> maxnum;

                game(maxnum);

        }


            //Exit dialog

            else if (dialogoption == 2) {

            cout << "Thank you! Good bye!" << endl << endl;;


                return 0;

            }

            //Dialog option not 1 or 2

            else {

            cout << "Invalid input. Please try again." << endl << endl;
    }

    }
}


//The game function

int game(int maxnum) {

    //Seed the timer

    srand(time(NULL));

    //Initailize game variables
    int luku = rand() % (maxnum - 1) + 1; //This is how we ensure that range is not from 0 to maxnum
    int arpa; //Number the player will guess
    int count = 0; //Reset counter for the new game


    cout << "Generating random number" << endl << endl;

    cout << "Enter number between 1 and " << (maxnum) << endl << endl;

    cin >> arpa;

    cout << endl;

    //While loop when player hasnt guessed the randomly generated number
    while (arpa != luku) {

        // If smaller
        if (arpa < luku) {

            cout << "The number " << arpa << " is smaller than random number"  << endl << endl;

        }

        // If greater
        else {
            cout << "The number " << arpa << " is greater than random number" << endl << endl;

        }

        count++;

        cout << "Enter number between 1 and " << maxnum << endl << endl;

        cin >> arpa;

        cout << endl;

    }

    //The player has guessed the number

    count++;

    cout << "The number " << arpa << " is equal to random number!" << endl << endl << "Good job!" << endl << endl;

    cout << "Number of guesses: " << count << endl;

    return count;
}
