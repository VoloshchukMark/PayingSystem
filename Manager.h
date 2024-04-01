#ifndef MANAGER_H
#define MANAGER_H

#include "Worker.h"
#include "Employee.h"
#include "Display.h"


class Manager : public Worker
{
    public:

    void giveTask(Employee &other, const string &newTask);
    void displayInformation();

    Manager& operator =(const Manager &other)
    {
        if(this != &other)
        {
            Worker::operator=(other);
        }
        return *this;
    }

    virtual void displayName() override;
    virtual void displayAge() override;
    virtual void displaySex() override;

        Manager();
        Manager(string newName);
        Manager(string newName, int newAge);
        Manager(string newName, int newAge, string newSex);
        virtual ~Manager() override {}
};

#endif // MANAGER_H
