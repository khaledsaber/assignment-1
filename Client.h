#include "BankAccount.h"
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

using namespace std;
class BankAccount;  //forward declaration

class Client
{
private:
    string name;
    string address;
    string phone;
    BankAccount *bankAccount;



public:
    Client();
    Client(string n, string a,string p, BankAccount *account)
    {
          // i implemented this function here to avoid errors ;
        name = n;
        address = a;
        phone = p;
        bankAccount=account;


    }

    void setName(string);
    void setAddress(string);
    void setPhone(string);
    string getName();
    string getAddrss();
    string getPhone();
    BankAccount *getAccount(){
     return bankAccount;

    }



};

#endif // CLIENT_H
