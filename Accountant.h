#ifndef ACCOUNTANT_H
#define ACCOUNTANT_H

#include "Employee.h"


class Accountant : public Employee
{
public:
    void calculateSalary(Employee &obj);

    void displayName() override;
    void displayAge() override;
    void displaySex() override;
    void displayId();
    void displayInformation() override;

    void setName(string newName) override;
    void setAge(int newAge) override;
    void setSex(string newSex) override;
    void setID(int newId) override;
    void setTitle(string newTitle) override;

    void copyClass(Employee &obj) override;

    Accountant();
    Accountant(string newName);
    Accountant(string newName, int newAge);
    Accountant(string newName, int newAge, string newSex);
    Accountant(string newName, int newAge, string newSex, string newTitle);
    Accountant(string newName, int newAge, string newSex, string newTitle, double newWorkingTime);
    Accountant(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate);

    virtual ~Accountant() override{}
};

#endif // ACCOUNTANT_H
