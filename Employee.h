#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Worker.h"
#include "Display.h"


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
    Employee &operator=(const Employee &obj)
    {
        if (this != &obj)
        {
            Worker::operator=(obj);
            salary = obj.salary;
            workingTime = obj.workingTime;
            task = obj.task;
        }
        return *this;
    }

    Employee();
    Employee(string newName);
    Employee(string newName, int newAge);
    Employee(string newName, int newAge, string newSex);
    Employee(string newName, int newAge, string newSex, string newTitle);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary);
    Employee(string newName, int newAge, string newSex, string newTitle, double newSalary, double newWorkingTime);
    virtual ~Employee() override{}
};

#endif // EMPLOYEE_H
