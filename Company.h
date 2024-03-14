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




    Company();
    Company(const string& newName);
    Company(const string& newName, int newAmountOfWorkers);
    Company(const string& newName, int newAmountOfWorkers, double newMoneyFund);

    Company(const Company &obj);
    ~Company();
};


#endif // COMPANY_H
