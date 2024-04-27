#include "Accountant.h"
#include "Employee.h"
#include <iostream>
#include <string.h>


    void Accountant::calculateSalary(Employee &obj)
    {
        double newSalary = obj.getWorkingTime() * obj.getHourlyRate();
        obj.setSalary(newSalary);

    }

    void Accountant::displayName()
    {
        cout<<"Name: "<<this->getName()<<endl;
    }
    void Accountant::displayAge()
    {
        cout<<"Age: "<<this->getAge()<<endl;
    }
    void Accountant::displaySex()
    {
        cout<<"Sex: "<<this->getSex()<<endl;
    }
    void Accountant::displayId()
    {
        cout<<"ID: "<<this->getId()<<endl;
    }

    void Accountant::displayInformation()
    {
        cout<<"============================================="<<endl;
        this->displayName();
        this->displayAge();
        this->displaySex();
        this->displayId();
        cout<<"============================================="<<endl;
    }


    void Accountant::setName(string newName)
    {
        this->changeName(newName);
    }
    void Accountant::setAge(int newAge)
    {
        this->changeAge(newAge);
    }
    void Accountant::setSex(string newSex)
    {
        this->changeSex(newSex);
    }
    void Accountant::setID(int newId)
    {
        this->changeId(newId);
    }
    void Accountant::setTitle(string newTitle)
    {
        this->changeTitle(newTitle);
    }

    void Accountant::copyClass(Employee &obj)
    {
        this->setName(obj.getName());
        this->setAge(obj.getAge());
        this->setSex(obj.getSex());
        this->setID(obj.getId());
        this->setTitle(obj.getTitle());
    }

Accountant::Accountant()
    :Accountant("Unknown", 18, "Unknown", "Unknown", 0, 0.0, 0.0) {}
//Accountant::Accountant(string newName)
//    :Accountant(newName, 18, "Unknown", "Unknown", 0.0, 0.0) {}
//Accountant::Accountant(string newName, int newAge)
//    :Accountant(newName, newAge, "Unknown", "Unknown", 0.0, 0.0) {}
//Accountant::Accountant(string newName, int newAge, string newSex)
//    :Accountant(newName, newAge, newSex, "Unknown", 0.0, 0.0) {}
//Accountant::Accountant(string newName, int newAge, string newSex, string newTitle)
//    :Accountant(newName, newAge, newSex, newTitle, 0.0, 0.0) {}
//Accountant::Accountant(string newName, int newAge, string newSex, string newTitle, double newWorkingTime)
//    :Accountant(newName, newAge, newSex, newTitle, newWorkingTime, 0.0) {}
Accountant::Accountant(string newName, int newAge, string newSex, string newTitle, double newId, double newWorkingTime, double newHourlyRate)
    :Employee(newName, newAge, newSex, newTitle, newId, newWorkingTime, newHourlyRate) {}





