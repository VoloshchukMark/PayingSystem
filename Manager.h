#ifndef MANAGER_H
#define MANAGER_H

#include "Worker.h"
#include "Employee.h"


class Manager : public Worker
{
    public:

    void giveTask(Employee &other, const string &newTask);
    void displayInformation();

        Manager();
        Manager(string newName);
        Manager(string newName, int newAge);
        Manager(string newName, int newAge, string newSex);
        ~Manager() {}
};

#endif // MANAGER_H
