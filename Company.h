#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include <string.h>

using namespace std;

class Company
{
private:
    string nameOfTheCompany;
    int amountOfWorkers;
    double moneyFund;
public:
    void showStatistic();
    void newNameOfTheCompany();
    void newAmountOfWorkers();
    void newMoneyFund();
    void changeStatistic();

    Company();
    Company(string setNameOfTheCompany);
    Company(string setNameOfTheCompany, int setAmountOfWorkers);
    Company(string setNameOfTheCompany, int setAmountOfWorkers, double setMoneyFund);
    ~Company();
};

#endif // COMPANY_H
