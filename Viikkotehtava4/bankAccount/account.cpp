#include "account.h"


using namespace std;



Account::Account(string n) {

    name = n;
}

double Account::getBalance() {

    return balance;
}

bool Account::deposit (double amount){


    if (amount <= 0) {

        cout << "The deposit must larger than 0"
             << endl << endl;

        return false;

    }

    else {

        cout << "The deposit "
             << amount
             << " has been added to your account balance."
             << endl;


        balance = balance + amount;
        cout << "The new balance: "
             << balance
             << endl << endl;


        return true;

    }

}

bool Account::withdraw (double amount) {

    if (amount <= 0) {

        cout << "Ineligible withdraw. "
             << "The withdraw must be larger than 0"
             << endl << endl;

        return false;
    }

    else {

        if (balance < amount) {

            cout << "The withdraw exceeds the account balance"
                 << endl << endl;

            return false;
        }

        else {

            cout << "You have withdrawn "
                 << amount
                 << " from your account."
                 << endl;

            balance = balance - amount;

            cout << "The new balance: "
                 << balance
                 << endl << endl;

            return true;
        }
    }
}
