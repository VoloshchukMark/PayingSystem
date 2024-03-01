#include "Company.h"
#include <iostream>
#include <string.h>


using namespace std;

void Company::showStatistic()
{
    cout<<"============================================="<<endl;
    cout<<"Name of the company: "<<nameOfTheCompany<<endl;
    cout<<"Amount of workers: "<<amountOfWorkers<<endl;
    cout<<"Money fund: "<<moneyFund<<endl;
    cout<<"============================================="<<endl;
}

void Company::newNameOfTheCompany()
{
    string NameOfTheCompany;
    cout<<"Enter new name of the company: ";
    getline(cin, NameOfTheCompany);
    if (NameOfTheCompany.size()>30)
    {
        cout<<"New name of the company is too large. Try again.\n";
        NameOfTheCompany.clear();
        newNameOfTheCompany();
    } else if(NameOfTheCompany.size()==0)
    {
        cout<<"New name is empty. Try again.\n";
        NameOfTheCompany.clear();
        newNameOfTheCompany();
    } else
    {
        nameOfTheCompany = NameOfTheCompany;
        cout<<"The name of the company was changed successfully.\n\n";
        NameOfTheCompany.clear();
    }
}

void Company::newAmountOfWorkers()
{
    int AmountOfWorkers;
    cout<<"Enter new amount of workers: ";
    cin>>AmountOfWorkers;
    if (AmountOfWorkers==0)
    {
        cout<<"Amount of workers cannot be null. Try again.\n";
        newAmountOfWorkers();
    } else
    {
        amountOfWorkers = AmountOfWorkers;
        cout<<"Amount of workers was changed successfully.\n\n";
    }
}

void Company::newMoneyFund()
{
    double MoneyFund;
    cout<<"Enter new money fund: ";
    cin>>MoneyFund;
    if (MoneyFund==0)
    {
        cout<<"Money fund cannot be null. Try again.\n";
        newMoneyFund();
    } else
    {
        moneyFund = MoneyFund;
        cout<<"Money fund was changed successfully.\n\n";
    }
}
void Company::changeStatistic()
{
    newNameOfTheCompany();
    newAmountOfWorkers();
    newMoneyFund();
}

Company::Company()
    :Company("Unknown", 0, 0.0) {}
Company::Company(string setNameOfTheCompany)
    :Company(setNameOfTheCompany, 0, 0.0) {}
Company::Company(string setNameOfTheCompany, int setAmountOfWorkers)
    :Company(setNameOfTheCompany, setAmountOfWorkers, 0.0) {}
Company::Company(string setNameOfTheCompany, int setAmountOfWorkers, double setMoneyFund)
    :nameOfTheCompany{setNameOfTheCompany}, amountOfWorkers{setAmountOfWorkers}, moneyFund{setMoneyFund} {}
Company::~Company() {}
