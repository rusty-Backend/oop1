#include <iostream>
#include "account.h"
#include "creditaccount.h"
#include "customer.h"

using namespace std;

int main()
{
    Customer A("Heka", 1000);
    Customer B("Fabe", 500);

    A.deposit(100);
    A.withdraw(20);
    A.withdrawCredit(10);
    B.withdrawCredit(20);

    A.transfer(50, B);

    A.showBalance();
    B.showBalance();

    A.payCredit(10);
    B.payCredit(10);

    A.showBalance();
    B.showBalance();


}
