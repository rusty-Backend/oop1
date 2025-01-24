#include <iostream>
#include "italianchef.h"
#include "chef.h"

using namespace std;

int main()
{

    Chef cooker("Luigi");
    cooker.makeSalad(10);

    Chef foodMaker("Mario");
    foodMaker.makeSoup(12);

    ItalianChef chef("Robert");
    chef.askSecret("pizza", 25, 30);;
    return 0;
}
