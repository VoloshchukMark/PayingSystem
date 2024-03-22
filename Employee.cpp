#include "Employee.h"
#include <iostream>
#include <string.h>

using namespace std;

void Employee::displayInformation()
{
    cout<<"============================================="<<endl;
    cout<<"Name: "<<this->getName()<<endl;
    cout<<"Age: "<<this->getAge()<<endl;
    cout<<"Sex: "<<this->getSex()<<endl;
    cout<<"Job title: "<<this->getTitle()<<endl;
    cout<<"Salary: "<<salary<<" EUR"<<endl;
    cout<<"Total working time: "<<this->workingTime<<" hours"<<endl;
    cout<<"============================================="<<endl;
}

    void Employee::setTask(string newTask)
    {
        this->task = newTask;
    }
    void Employee::displayTask()
    {
        cout<<"Task of "<<this->getName()<<" is: "<<task<<endl;
    }


    void Employee::displayName()
    {
        cout<<"Name: "<<this->getName()<<endl;
    }
    void Employee::displayAge()
    {
        cout<<"Age: "<<this->getAge()<<endl;
    }
    void Employee::displaySex()
    {
        cout<<"Sex: "<<this->getSex()<<endl;
    }
    void Employee::displayTitle()
    {
        cout<<"Job title: "<<this->getTitle()<<endl;
    }


Employee::Employee()
    :Employee("Unknown", 0, "Unknown", "None", 0.0, 0.0) {}
Employee::Employee(string newName)
    :Employee(newName, 0, "Unknown", "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge)
    :Employee(newName, newAge, "Unknown", "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex)
    :Employee(newName, newAge, newSex, "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle)
    :Employee(newName, newAge, newSex, newTitle, 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newSalary)
    :Employee(newName, newAge, newSex, newTitle, newSalary, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newSalary, double newWorkingTime)
    :Worker(newName, newAge, newSex, newTitle), salary{newSalary}, workingTime{newWorkingTime}, task{"None"}{}
