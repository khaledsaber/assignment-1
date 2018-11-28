#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include "Client.h"


using namespace std;


class BankAccount
{
private:
    string accountID;
    double balance;
    Client *client;


public:
    BankAccount();
    BankAccount(string );
    BankAccount(string id, double bal,  Client *c )
    {
        set(id, bal);
        client = c;




    }
    void set(string, double);
    void setID(string );
    void setBalance(double);
    string getID();
    double getBalance();
    virtual void withdraw(double);
    virtual void deposite(double);
};

#endif // BANKACCOUNT_H
