#include "Accountant.h"
#include "Employee.h"
#include <iostream>
#include <string.h>


    void Accountant::calculateSalary(Employee &obj)
    {
        double newSalary = obj.getWorkingTime() * obj.getHourlyRate();
        obj.setSalary(newSalary);

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
    :Employee(newName, newAge, newSex, newTitle, newId, newWorkingTime, newHourlyRate, "None", 0.0) {}


