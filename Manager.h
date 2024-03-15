#ifndef MANAGER_H
#define MANAGER_H

#include "Worker.h"


class Manager : public Worker
{
    public:


        Manager();
        Manager(string newName);
        Manager(string newName, int newAge);
        Manager(string newName, int newAge, string newSex);
        ~Manager() {}
};

#endif // MANAGER_H
