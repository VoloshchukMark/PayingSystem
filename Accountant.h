#ifndef ACCOUNTANT_H
#define ACCOUNTANT_H

#include "Employee.h"


class Accountant : public Employee
{
public:
    void calculateSalary(Employee &obj);

    Accountant();
    Accountant(string newName);
    Accountant(string newName, int newAge);
    Accountant(string newName, int newAge, string newSex);
    Accountant(string newName, int newAge, string newSex, string newTitle);
    Accountant(string newName, int newAge, string newSex, string newTitle, double newWorkingTime);
    Accountant(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate);
};

#endif // ACCOUNTANT_H
