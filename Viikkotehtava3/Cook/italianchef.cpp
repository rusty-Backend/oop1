#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;

ItalianChef::ItalianChef(string chefName) {
    cout << "Constructor: "
         << endl
         << chefName
         << endl << endl;

}

bool ItalianChef::askSecret(string password, int numOfFlours, int numOfWater) {

    if (password == "pizza") {

        int numOfPizzas = makePizza(numOfFlours, numOfWater);

        cout << "Congratulations! You have entered the correct password!"
             << endl << endl
             <<"With these ingredients we are able to make "
             << numOfPizzas
             <<" pizzas. Un Momento Segnore / Signora!"
             << endl << endl;

        return true;

    }

    else {

        cout << "Your password is incorrect"
             << endl << endl
             << "Retry or try something not-so-delicious from the menu"
             << endl << endl;

        return false;
    }
}

int ItalianChef::makePizza(int numOfFlours, int numOfWater){

    int portionsFromFlour = numOfFlours / 5;
    int portionsFromWater = numOfWater / 5;

    if (portionsFromFlour >= portionsFromWater) {

        return portionsFromWater;
    }

    else {

        return portionsFromFlour;
    }

}
