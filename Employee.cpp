#include "Employee.h"
#include <iostream>
#include <string.h>

using namespace std;

void Employee::displayInformation()
{
    cout<<"============================================="<<endl;
    cout<<*this;
    if(this->getTitle() != "Accountant")
    {
        cout<<"Working time: "<<getWorkingTime()<<" h"<<endl;
        if (getSalary() < 1.0)
        {
            cout<<"Salary: Unknown"<<endl;
        } else {
            cout<<"Salary: "<<getSalary()<<" EUR"<<endl;
        }
    }
    cout<<"ID: "<<this->getID()<<endl;
    cout<<"=============================================\n"<<endl;
}

    void Employee::setName(string newName)
    {
        this->changeName(newName);
    }
    void Employee::setAge(int newAge)
    {
        this->changeAge(newAge);
    }
    void Employee::setSex(string newSex)
    {
        this->changeSex(newSex);
    }
    void Employee::setTitle(string newTitle)
    {
        this->changeTitle(newTitle);
    }
    void Employee::setWorkingTime(double newWorkingTime)
    {
        workingTime = newWorkingTime;
    }
    void Employee::setHoulryRate(double newHourlyRate)
    {
        hourlyRate = newHourlyRate;
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
    string Employee::getTask()
    {
        return task;
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


    void Employee::copyClass(Employee &obj)
    {
        this->setName(obj.getName());
        this->setAge(obj.getAge());
        this->setSex(obj.getSex());
        this->setTitle(obj.getTitle());
        this->setId(obj.getId());
        this->setWorkingTime(obj.getWorkingTime());
        this->setHoulryRate(obj.getHourlyRate());
        this->setTask(obj.getTask());
        this->setSalary(obj.getSalary());
        this->setId(obj.getId());
    }


    Employee::Employee(const Employee &obj)
        :Worker(obj), workingTime{obj.workingTime}, hourlyRate{obj.hourlyRate}, task{obj.task}, salary(obj.salary) {}
//    Employee::Employee(Employee &&obj)
//        :Worker(move(obj)), workingTime{obj.workingTime}, task{obj.task}
//        {
//            obj.workingTime = 0;
//            obj.task.clear();
//        }




Employee::Employee()
    :Employee("Unknown", 0, "Unknown", "Unknown", 0, 0.0, 0.0, 0.0, "None") {}
Employee::Employee(string newName)
    :Employee(newName, 0, "Unknown", "Unknown", 0, 0.0, 0.0,  0.0, "None") {}
//Employee::Employee(string newName, int newAge)
//    :Employee(newName, newAge, "Unknown", "None", 0.0, 0.0) {}
//Employee::Employee(string newName, int newAge, string newSex)
//    :Employee(newName, newAge, newSex, "None", 0.0,  0.0) {}
//Employee::Employee(string newName, int newAge, string newSex, string newTitle)
//    :Employee(newName, newAge, newSex, newTitle, 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate)
    :Employee(newName, newAge, newSex, newTitle, newId, newWorkingTime, newHourlyRate, 0.0, "None") {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate, double newSalary, string newTask)
    :Worker(newName, newAge, newSex, newTitle, newId), workingTime{newWorkingTime}, hourlyRate{newHourlyRate}, salary{newSalary}, task{newTask} {}

