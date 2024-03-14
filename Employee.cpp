#include "Employee.h"
#include <iostream>
#include <string.h>

using namespace std;



Employee::Employee()
    :Employee("Unknown", 0, 0, "None", 0.0, 0.0) {}
Employee::Employee(string newName)
    :Employee(newName, 0, 0, "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge)
    :Employee(newName, newAge, 0, "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex)
    :Employee(newName, newAge, newSex, "None", 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle)
    :Employee(newName, newAge, newSex, newTitle, 0.0, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newSalary)
    :Employee(newName, newAge, newSex, newTitle, newSalary, 0.0) {}
Employee::Employee(string newName, int newAge, string newSex, string newTitle, double newSalary, double newWorkingTime)
    :Worker(newName, newAge, newSex, newTitle),salary{newSalary}, workingTime{newWorkingTime} {}
