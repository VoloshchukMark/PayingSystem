#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include <string.h>

using namespace std;

class Company
{
private:
    string name;
    int* amountOfWorkers;
    double* moneyFund;
public:

    friend std::istream &operator>>(std::istream &is, Company &obj);
    friend std::ostream &operator<<(std::ostream &os, const Company &obj);

    string getName();
    int* getAmountOfWorkers();
    double* getMoneyFund();

    virtual void displayName();
    virtual void displayAmountOfWorkers();
    virtual void displayMoneyFund();


    Company();
    Company(const string& newName);
    Company(const string& newName, int newAmountOfWorkers);
    Company(const string& newName, int newAmountOfWorkers, double newMoneyFund);

    Company(const Company &obj);
    virtual ~Company();
};


#endif // COMPANY_H
