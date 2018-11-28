#ifndef BANKINGAPPLICATION_H
#define BANKINGAPPLICATION_H
#include "BankAccount.h"
#include"SavingsBankAccount.h"
#include "Client.h"
#include <vector>

class BankingApplication
{
private:
    vector<Client> clients;


public:
    BankingApplication();
    void display();


};

#endif // BANKINGAPPLICATION_H
