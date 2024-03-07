#include "BankSystem.h"
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

void BankSystem::showAnnualSalary() const
{
    cout<<"The current annual salary is: "<<annualSalary<<" EUR."<<endl;
}

void BankSystem::weeklyGrossPay() const
    {
        double weeklyGrossPay = annualSalary / 52;
        weeklyGrossPay = round(weeklyGrossPay * 100) / 100;                 //Округлення до двох цифр після коми
        cout<<"Your weekly salary is: "<<weeklyGrossPay<<" EUR."<<endl;
    }

void BankSystem::bi_weeklyGrossPay() const
    {
        double bi_weeklyGrossPay = annualSalary / 26;
        bi_weeklyGrossPay = round(bi_weeklyGrossPay * 100) / 100;                 //Округлення до двох цифр після коми
        cout<<"Your bi-weekly salary is: "<<bi_weeklyGrossPay<<" EUR."<<endl;
    }

void BankSystem::monthlyGrossPay() const
    {
        double monthlyGrossPay = annualSalary / 12;
        monthlyGrossPay = round(monthlyGrossPay * 100) / 100;                 //Округлення до двох цифр після коми
        cout<<"Your monthly salary is: "<<monthlyGrossPay<<" EUR."<<endl;
    }

void BankSystem::semi_monthlyGrossPay() const
    {
        double semi_monthlyGrossPay = annualSalary / 24;
        semi_monthlyGrossPay = round(semi_monthlyGrossPay * 100) / 100;                 //Округлення до двох цифр після коми
        cout<<"Your semi-monthly salary is: "<<semi_monthlyGrossPay<<" EUR."<<endl;
    }

void BankSystem::salaryCompare(const BankSystem &other) const
{
    if (annualSalary > other.annualSalary)
    {
        cout<<"First annual salary is bigger than the second!\n";
    } else if (annualSalary == other.annualSalary)
    {
        cout<<"Both annual salaries are the same!\n";
    } else{ cout<<"Second annual salary is bigger than the first!\n"; }
}

void BankSystem::showNumberOfSalaries() const
{
    cout<<"Number on salaries is: "<<numberOfSalaries<<endl;
}




BankSystem::BankSystem()
    :BankSystem(500.0) {numberOfSalaries++;}
BankSystem::BankSystem(double setAnnualSalary)
    :annualSalary{setAnnualSalary} {numberOfSalaries++;}
BankSystem::~BankSystem() {numberOfSalaries--;}
