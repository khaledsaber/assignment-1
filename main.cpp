#include <iostream>
#include "Client.h"
#include "BankAccount.h"
#include "SavingsBankAccount.h"
#include "BankingApplication.h"

using namespace std;
                            //////////Author: Khaled Saber
                            //banking system application


int main()
{


BankAccount *account  = new SavingsBankAccount("20140105" , 2500);
Client a ("khaled" , "haram" , "0111098756" , account);

cout<<a.getName()<<endl;
cout<<a.getAddrss()<<endl;
cout<<a.getPhone()<<endl;
cout<<account->getID()<<endl;
cout<<account->getBalance()<<endl;
account->deposite(90);
cout<<account->getBalance()<<endl;
account->withdraw(1600);
cout<<account->getBalance()<<endl;




/*BankingApplication a;
a.display();
*/

}
