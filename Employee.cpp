#include "Employee.h"
#include <iostream>
#include <string.h>

using namespace std;

void Employee::displayInformation()
{
    cout<<*this;
    cout<<"ID: "<<this->getID()<<endl;
    cout<<"=============================================\n"<<endl;
}

    void Employee::setTask(string newTask)
    {
        this->task = newTask;
    }
    void Employee::setSalary(double calculatedSalary)
    {
        salary = calculatedSalary;
    }
    void Employee::setID(int newId)
    {
        setId(newId);
    }



    double Employee::getWorkingTime()
    {
        return workingTime;
    }
    double Employee::getHourlyRate()
    {
        return hourlyRate;
    }
    double Employee::getSalary()
    {
        return salary;
    }
    int Employee::getID()
    {
        return this->getId();
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
        void Employee::displayTask()
    {
        cout<<"Task of "<<this->getName()<<" is: "<<task<<endl;
    }
    void Employee::displaySalary()
    {
        cout<<"Salary: "<<salary<<" EUR"<<endl;
    }



    Employee::Employee(const Employee &obj)
        :Worker(obj), workingTime{obj.workingTime}, hourlyRate{obj.hourlyRate}, task{obj.task} {}
//    Employee::Employee(Employee &&obj)
//        :Worker(move(obj)), workingTime{obj.workingTime}, task{obj.task}
//        {
//            obj.workingTime = 0;
//            obj.task.clear();
//        }




Employee::Employee()
    :Employee("Unknown", 0, "Unknown", "Unknown", 0, 0.0, 0.0, "None", 0.0) {}
//Employee::Employee(string newName)
//    :Employee(newName, 0, "Unknown", "None", 0.0, 0.0) {}
//Employee::Employee(string newName, int newAge)
//    :Employee(newName, newAge, "Unknown", "None", 0.0, 0.0) {}
//Employee::Employee(string newName, int newAge, string newSex)
//    :Employee(newName, newAge, newSex, "None", 0.0,  0.0) {}
//Employee::Employee(string newName, int newAge, string newSex, string newTitle)
//    :Employee(newName, newAge, newSex, newTitle, 0.0, 0.0) {}
//Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newWorkingTime)
//    :Employee(newName, newAge, newSex, newTitle, newWorkingTime, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate, string newTask, double newSalary)
    :Worker(newName, newAge, newSex, newTitle, newId), workingTime{newWorkingTime}, hourlyRate{newHourlyRate}, task{newTask}, salary{newSalary} {}

