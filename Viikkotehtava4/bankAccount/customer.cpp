#include "customer.h"


Customer::Customer(string customerName, double creditLimit)
    : name(customerName), Account(customerName), creditAccount(customerName, creditLimit) {

}

string Customer::getName() {

    return name;
}

void Customer::showBalance() {
    cout << name << "'s Account balance: "
         << Account.getBalance()
         << endl;
    cout << name << "'s Credit account balance: "
         << creditAccount.getBalance()
         << endl << endl;
}

bool Customer::deposit(double amount) {

    if (amount <= 0) {

        cout << "The deposit must larger than 0"
             << endl;

        return false;

    }

    else {
        cout << "Working on customer: "
             << Customer::getName()
             << endl;

        Account.deposit(amount);

        return true;
    }
}

bool Customer::withdraw(double amount) {

    if (amount <= 0) {

        cout << "The withdraw must larger than 0"
             << endl;

        return false;
    }

    else {

        cout << "Working on customer: "
             << name
             << endl;

        Account.withdraw(amount);

        return true;
    }
}

bool Customer::payCredit(double amount) {

    if (amount <= 0) {

        cout << "The the credit payment must larger than 0"
             << endl;

        return false;
    }

    else {

        cout << "Working on customer: "
             << name
             << endl;

        creditAccount.deposit(amount);

        return true;

    }
}

bool Customer::withdrawCredit(double amount) {

    if (amount <= 0) {
        cout << "The credit withdrawal must be greater than 0." << endl;
        return false;
    }


    else {

        cout << "Working on customer: " << name << endl;

        creditAccount.withdraw(amount);

        return true;

    }
}

bool Customer::transfer(double amount, Customer &receiver) {

    if (amount <= 0) {
        cout << "Transfer amount must be greater than 0."
             << endl;

        return false;
    }


    cout << "Transferring " << amount << " from " << this->getName()
         << " to " << receiver.getName()
         << endl << endl;

    if (Account.getBalance() >= amount) {
        Account.withdraw(amount);
    }

    else {
        double remaining = amount - Account.getBalance();
        Account.withdraw(Account.getBalance());
        creditAccount.withdraw(remaining);
    }

    receiver.deposit(amount);
    return true;
}
