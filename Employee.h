#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Worker.h"
#include "Display.h"


class Employee : public Worker
{
private:
    double workingTime;
    double hourlyRate;
    string task;
    double salary;

public:
    void setName(string newName);
    void setAge(int newAge);
    void setSex(string newSex);
    void setTitle(string newTitle);
    void setWorkingTime(double newWorkingTime);
    void setHoulryRate(double newHourlyRate);
    void setTask(string newTask);
    void setSalary(double calculatedSalary);
    void setID(int newId);

    double getWorkingTime();
    double getHourlyRate();
    string getTask();
    double getSalary();
    int getID();

    virtual void displayName() override;
    virtual void displayAge() override;
    virtual void displaySex() override;
    virtual void displayTitle() override;
    void displayInformation();
    void displayTask();
    void displaySalary();

    void copyClass(Employee &obj);

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
    Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate, string newTask, double newSalary);

    friend std::ostream &operator<<(std::ostream &os, const Employee &obi);

    virtual ~Employee() override{}
};

#endif // EMPLOYEE_H
