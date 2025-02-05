#include "creditaccount.h"


creditAccount::creditAccount(string name, double cl)
    : Account(name), creditLimit(cl) {

    creditLimit = cl;
    cout << "Account name: "
         << name << endl;

    cout << "The credit limit: "
         << creditLimit
         << endl << endl;
}

bool creditAccount::deposit(double amount) {

    creditAccount::getBalance();

    if (amount <= 0) {

        cout << "The deposit must larger than 0"
             << endl << endl;

        return false;
    }

    else {

        cout << "The deposit "
             << amount
             << " has been added to your account balance."
             << endl << endl;

        balance = balance + amount;
        cout << "The new ";
        creditAccount::getBalance();

        return true;

    }
}

bool creditAccount::withdraw(double amount) {
    if (amount <= 0) {

        cout << "Ineligible withdraw. The withdraw must be larger than 0"
             << endl << endl;

        return false;
    }

    if ((balance - amount) >= -creditLimit) {

        cout << "You have withdrawn " << amount << " from your credit account." << endl;

        balance -= amount;

        cout << "The new credit balance: " << balance << endl << endl;

        return true;

    }

    else {

        cout << "The withdraw exceeds the credit account limit" << endl << endl;

        return false;
    }
}
