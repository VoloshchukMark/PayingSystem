#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Company.h"
#include "Manager.h"


class Department : public Company
{
    Manager manager;
};

#endif // DEPARTMENT_H
