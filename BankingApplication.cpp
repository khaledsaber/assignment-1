#include "BankingApplication.h"
#include <vector>

BankingApplication::BankingApplication()
{
    BankAccount *account1  = new SavingsBankAccount("20140105" , 2500);
    Client a ("khaled" , "haram" , "0111098756" , account1);
    clients.push_back(a);


}
void BankingApplication::display(){
    //cout<<clients.at(0).getName()<<endl;
    //cout<<clients.at(0).getAccount.getBalance()<<endl;
}
