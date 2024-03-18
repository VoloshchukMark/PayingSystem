#include "Department.h"

    void Department::setManager(Manager &other)
    {
        manager1.operator=(other);
    }

Department::Department()
    :Company("None", 0, 0.0) {}
Department::Department(const string& newName)
    :Company(newName, 0, 0.0) {}
Department::Department(const string& newName, int newAmountOfWorkers)
    :Company(newName, newAmountOfWorkers, 0.0) {}
Department::Department(const string& newName, int newAmountOfWorkers, double newMoneyFund)
    :Company(newName, newAmountOfWorkers, newMoneyFund) {}
