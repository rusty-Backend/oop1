#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef() {
    cout << "Empty ItalianChef constructor"
         << endl << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destructor"
         << endl << endl;
}

ItalianChef::ItalianChef(string chefName) {
    cout << "ItalianChefs constructor"
         << endl << endl
         << "ItalianChefs name: "
         << chefName
         << endl << endl;

}

bool ItalianChef::askSecret(string password, int numOfFlours, int numOfWater) {

    if (password == "pizza") {

        flours = numOfFlours;
        water = numOfWater;
        int numOfPizzas = makePizza();

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

int ItalianChef::makePizza(){

    int portionsFromFlour = flours / 5;
    int portionsFromWater = water / 5;

    if (portionsFromFlour >= portionsFromWater) {

        return portionsFromWater;
    }

    else {

        return portionsFromFlour;
    }

}
