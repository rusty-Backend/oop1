#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>

using namespace std;

class ItalianChef : public Chef
{
public:
    ~ItalianChef();
    ItalianChef(string);
    bool askSecret(string, int, int);

private:
    int makePizza(int numOfFlours, int numOfWater);
};

#endif // ITALIANCHEF_H
