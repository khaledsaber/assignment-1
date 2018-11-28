#include "BankAccount.h"

BankAccount::BankAccount()
{
   //default constructor
}
BankAccount::BankAccount(string id)
{
    //parametrized constructor 1
    setID(id);

}
/*
BankAccount::BankAccount(string id, double bal )
{
      //parametrized constructor 2
    set(id , bal);

}
*/
 void BankAccount::set(string id , double bal){
     ///function to set the private variables , is important if i want to initialize from another class
     accountID = id;
     balance = bal;
}

void BankAccount::setID(string id )
{
    /// id setter

    accountID = id;
}

void BankAccount::setBalance(double bal)
{
    //balance setter
    balance = bal;

}

string BankAccount::getID()
{
    //id getter

    return accountID;

}
double BankAccount::getBalance()
{
    // balance getter

    return balance;
}
void BankAccount::withdraw(double amount)
{
   //withdraw an amount of  money from the initial balance
    if(amount<=balance)
    {

        balance = balance - amount;

    }

}
void BankAccount::deposite(double amount)
{
     //it adds the amount of deposit to the initial balance
    balance = balance + amount;


}

