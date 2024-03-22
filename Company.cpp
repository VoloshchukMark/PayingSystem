#include "Company.h"
#include <iostream>
#include <string.h>

using namespace std;


    string Company::getName()
    {
        return name;
    }
    int* Company::getAmountOfWorkers()
    {
        return amountOfWorkers;
    }
    double* Company::getMoneyFund()
    {
        return moneyFund;
    }



Company::Company()
    :Company("None", 0, 0.0) {}
Company::Company(const string& newName)
    :Company(newName, 0, 0.0) {}
Company::Company(const string& newName, int newAmountOfWorkers)
    :Company(newName, newAmountOfWorkers, 0.0) {}
Company::Company(const string& newName, int newAmountOfWorkers, double newMoneyFund)
    {
        name.assign(newName);
        amountOfWorkers = new int(newAmountOfWorkers);
        moneyFund = new double(newMoneyFund);
    }

Company::Company(const Company &obj)
{
    name = obj.name;
    amountOfWorkers = obj.amountOfWorkers;
    moneyFund = obj.moneyFund;
    cout<<"Copy constructor of Company class"<<endl;
}

Company::~Company()
{
    delete amountOfWorkers;
    delete moneyFund;
}

