#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Worker.h"


class Employee : public Worker
{
private:
    double salary;
    double workingTime;
    string task;
public:

    void displayInformation();
    void setTask(string newTask);
    void displayTask();

    virtual void displayName() override;
    virtual void displayAge() override;
    virtual void displaySex() override;
    virtual void displayTitle() override;

    Employee(const Employee &obj);
    Employee(Employee &&obj);

    Employee();
    Employee(string newName);
    Employee(string newName, int newAge);
    Employee(string newName, int newAge, string newSex);
    Employee(string newName, int newAge, string newSex, string newTitle);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary, double newWorkingTime);
    ~Employee() {}
};

#endif // EMPLOYEE_H
