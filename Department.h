#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Company.h"
#include "Manager.h"


class Department : public Company
{
public:
    Manager* manager1;
    void setManager(Manager &&other);
    void displayManager()
    {
        cout<<"Manager of the current department is: "<<this->manager1->getName()<<endl;;
    }

    Department(const Department &obj);

    Department();
    Department(const string& newName);
    Department(const string& newName, int newAmountOfWorkers);
    Department(const string& newName, int newAmountOfWorkers, double newMoneyFund);
    virtual ~Department() {
        delete manager1;}
};
#endif // DEPARTMENT_H
