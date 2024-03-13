#include "Company.h"
#include <iostream>
#include <string.h>

using namespace std;

void Company::showInfo()
{
    cout<<"============================================="<<endl;
    cout<<"Name of the company is: "<<nameOfTheCompany<<endl;
    cout<<"Amount of workers is: "<<*amountOfWorkers<<endl;
    cout<<"Money fund of the company is: "<<*moneyFund<<" EUR."<<endl;
    cout<<"============================================="<<endl;
}





Company::Company()
    :Company("None", 0, 0.0) {}
Company::Company(const string& newNameOfTheCompany)
    :Company(newNameOfTheCompany, 0, 0.0) {}
Company::Company(const string& newNameOfTheCompany, int newAmountOfWorkers)
    :Company(newNameOfTheCompany, newAmountOfWorkers, 0.0) {}
Company::Company(const string& newNameOfTheCompany, int newAmountOfWorkers, double newMoneyFund)
    {
        nameOfTheCompany = newNameOfTheCompany;
        amountOfWorkers = new int(newAmountOfWorkers);
        moneyFund = new double(newMoneyFund);
    }

Company::Company(const Company &obj)
{
    nameOfTheCompany = obj.nameOfTheCompany;
    amountOfWorkers = obj.amountOfWorkers;
    moneyFund = obj.moneyFund;
    cout<<"Copy constructor of Company class"<<endl;
}

Company::~Company()
{
    delete amountOfWorkers;
    delete moneyFund;
}

