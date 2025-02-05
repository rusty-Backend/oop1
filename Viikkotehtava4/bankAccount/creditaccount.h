#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <string>
#include <iostream>
#include "account.h"

using namespace std;

class creditAccount : public Account
{
public:

    creditAccount();
    creditAccount(string, double);
    bool deposit(double) override;
    bool withdraw(double) override;


protected:

    double creditLimit = 0;
};

#endif // CREDITACCOUNT_H
