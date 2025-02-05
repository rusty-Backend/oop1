#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>

using namespace std;

class Account
{
public:

    Account();
    Account(string);
    double getBalance();
    virtual bool deposit (double);
    virtual bool withdraw (double);

protected:

    string name;
    double balance = 0;

};


#endif // ACCOUNT_H
