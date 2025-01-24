#include "chef.h"
#include <iostream>
#include <string>

using namespace std;


Chef::Chef(string chefName) {
    cout << "Constructor: "
         << endl
         << "Chef name: "
         << chefName
         << endl << endl;
}


string Chef::getName() {

    return chefName;
}

int Chef::makeSalad(int numOfIngredients) {

    cout << "One portion requires 5 ingredients"
         << endl << endl
         << "You have " << numOfIngredients << " ingredients"
         << endl << endl;

    int numOfSalads = numOfIngredients / 5;

    cout << "That means we are making "
         << numOfSalads << " salads"
         << endl << endl;

    return numOfSalads;
}

int Chef::makeSoup(int numOfIngredients) {

    cout << "One portion requires 3 ingredients"
         << endl << endl
         << "You have " << numOfIngredients << " ingredients"
         << endl << endl;

    int numOfSoups = numOfIngredients / 3;

    cout << "That means we are making "
         << numOfSoups << " soups"
         << endl << endl;

    return numOfSoups;
}
