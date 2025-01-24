#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ~ItalianChef();
    ItalianChef(string);
    bool askSecret(string, int, int);

private:
    int makePizza();
    int flours;
    int water;
};

#endif // ITALIANCHEF_H
