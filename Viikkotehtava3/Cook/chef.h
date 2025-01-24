#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>

using namespace std;



class Chef
{
public:

    ~Chef();
    Chef(string);
    string getName();
    int makeSalad(int);
    int makeSoup(int);
    string chefName();

};

#endif // CHEF_H
