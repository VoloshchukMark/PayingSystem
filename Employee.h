#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Worker.h"
#include "Display.h"


class Employee : public Worker
{
private:
    double workingTime;
    double hourlyRate;
    double salary;
    string task;

public:
    virtual void setName(string newName);
    virtual void setAge(int newAge);
    virtual void setSex(string newSex);
    virtual void setTitle(string newTitle);
    virtual void setWorkingTime(double newWorkingTime);
    virtual void setHoulryRate(double newHourlyRate);
    virtual void setTask(string newTask);
    virtual void setSalary(double calculatedSalary);
    virtual void setID(int newId);

    double getWorkingTime();
    double getHourlyRate();
    string getTask();
    double getSalary();
    int getID();

    virtual void displayName() override;
    virtual void displayAge() override;
    virtual void displaySex() override;
    virtual void displayTitle() override;
    virtual void displayInformation();
    void displayTask();
    void displaySalary();

    virtual void copyClass(Employee &obj);

    Employee(const Employee &obj);
    Employee(Employee &&obj);
    Employee &operator=(const Employee &obj)
    {
        if (this != &obj)
        {
            Worker::operator=(obj);
            salary = obj.salary;
            workingTime = obj.workingTime;
            hourlyRate = obj.hourlyRate;
            task = obj.task;
        }
        return *this;
    }

    Employee();
    Employee(string newName);
    Employee(string newName, int newAge);
    Employee(string newName, int newAge, string newSex);
    Employee(string newName, int newAge, string newSex, string newTitle);
    Employee(string newName, int newAge, string newSex, string newTitle, double newWorkingTime);
    Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate);
    Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate, double newSalary, string newTask);

    friend std::ostream &operator<<(std::ostream &os, const Employee &obi);

    virtual ~Employee() override{}
};

#endif // EMPLOYEE_H
