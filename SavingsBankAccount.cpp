#include "SavingsBankAccount.h"


SavingsBankAccount::SavingsBankAccount(string id ,double initBalance ):BankAccount(id)
{
    //parametrized constructor
    minimumBalance = 1000;
    if(initBalance>=minimumBalance){
        setBalance(initBalance);
    }
}
double SavingsBankAccount::getMinBalance(){

    return minimumBalance;
}

void SavingsBankAccount::withdraw(double amount)
{
    //overridden function ,withdraw if initial balance will be more than minimum
    double allowed = getBalance() - minimumBalance;
    if(amount<=allowed){
        setBalance(getBalance() - amount);
    }
    else{
        cout<<"Sorry , This is more than what you can withdraw";
    }

}

void SavingsBankAccount::deposite(double amount)
{
    //overridden function , deposit if amount is >= 100 L.E
    if(amount>=100)
    {
        setBalance(getBalance() + amount);

    }
    else{
        cout<<"Sorry , you  should deposit 100 L.E or more";
    }



}



