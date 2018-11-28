#include "Client.h"
#include "BankAccount.h"

Client::Client()
{
  //default constructor


}
/*
Client::Client(string n, string a, string p , BankAccount *account )
{
    //parametrized constructor
    name = n;
    address = a;
    phone = p;
    bankAccount=account;

}
*/
void Client::setName(string n)
{
    name = n;

}
void Client::setAddress(string a)
{
    address = a;

}
void Client::setPhone(string p)
{
    phone = p;

}
string Client:: getName()
{
    return name;
}
string Client::getAddrss()
{
    return address;
}
string Client::getPhone()
{
    return phone;

}




