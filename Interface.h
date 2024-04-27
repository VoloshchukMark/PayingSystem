#ifndef INTERFACE_H
#define INTERFACE_H
#include "Employee.h"
#include "Accountant.h"
#include <vector>

class Interface
{
public:

    int amountOfEmployee = 0;
    Employee selectedEmployee;
    Accountant selectedAccountant;
    vector<Employee> employees;
//    vector<int>::iterator counter, maximum;

    int startMenu();
    void logAdmin();
    void logAccountant();
    void logEmployee();
    void adminMenu();
    void accountantMenu();
    void employeeMenu();

    void collectInfo();
    void saveInfo();
    void employeeCheck();
    void hireAnEmployee();


    Interface();
};

#endif // INTERFACE_H
