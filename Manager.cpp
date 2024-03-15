#include "Manager.h"
#include <iostream>
#include <string.h>

void Manager::giveTask(Employee &other, const string &newTask)
{
    other.setTask(newTask);
}




Manager::Manager()
    :Worker("None", 0, "Unknown") {}
Manager::Manager(string newName)
    :Worker(newName, 0, "Unknown") {}
Manager::Manager(string newName, int newAge)
    :Worker(newName, newAge, "Unknown") {}
Manager::Manager(string newName, int newAge, string newSex)
    :Worker(newName, newAge, newSex) {}

