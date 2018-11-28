#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H
#include<iostream>
#include"BankAccount.h"
class SavingsBankAccount : public BankAccount
{
    private:
        double minimumBalance;
    public:
        SavingsBankAccount(string ,  double );
        double getMinBalance();
        virtual void withdraw(double);
        virtual void deposite(double);


};

#endif // SAVINGSBANKACCOUNT_H
