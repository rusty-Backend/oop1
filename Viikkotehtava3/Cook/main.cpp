#include <iostream>
#include "italianchef.h"
#include "chef.h"

using namespace std;

int main()
{

    ItalianChef chef("Robert");
    chef.askSecret("pizza", 25, 30);;
    return 0;
}
