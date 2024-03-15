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

    Employee();
    Employee(string newName);
    Employee(string newName, int newAge);
    Employee(string newName, int newAge, string newSex);
    Employee(string newName, int newAge, string newSex, string newTitle);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary, double newWorkingTime);
};

#endif // EMPLOYEE_H
