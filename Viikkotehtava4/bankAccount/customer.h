#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include "account.h"
#include "creditaccount.h"

using namespace std;

class Customer
{


public:


    Customer();
    Customer(string, double);
    string getName();
    void showBalance();
    bool deposit(double);
    bool withdraw(double);
    bool payCredit(double);
    bool withdrawCredit(double);
    bool transfer(double, Customer &);

private:

    string name;
    Account Account;
    creditAccount creditAccount;
};

#endif // CUSTOMER_H
