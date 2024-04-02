#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"


using namespace std;




int BankSystem::numberOfSalaries = 0;

int main()
{
    Company ikea("Ikea", 3, 399.9);
    ikea.displayMoneyFund();
    Department furniture("Department of furniture crafting", 2, 170.0);
    Company& furniture1 = furniture;
    furniture1.displayMoneyFund();
    ikea.univChangeMoneyFund(ikea, 500.0);
    ikea.displayMoneyFund();
    furniture1.univChangeMoneyFund(furniture1, 300.0);
    furniture1.displayMoneyFund();

//    Manager manager2("Joba");
//    manager2.displayName();
//    Employee employee1("Puba");
//    employee1.displayName();
//    Worker worker1("Foofa");
//    worker1.displayName();
//    Employee employee2(employee1);
//    cout<<"Blanla"<<endl;
//    employee2.displayName();

//Manager serhiy("Serhiy", 18, "Male");
//Department infotech("Name", 20, 99.9);
//infotech.setManager(serhiy);
//infotech.displayManager();

//    Manager mark;
//    Employee vova("Vova", 18, "Male", "Worker");
//    mark.giveTask(vova, "Run around in cirles for 2 hours");
//    vova.displayTask();

//    Employee mark;
//    mark.displayInformation();
//    Employee vova("Volodymyr", 18, "Male", "Slave", 500.0, 20.0);
//    vova.displayInformation();
//    Employee serhiyo;
//    serhiyo.operator=(vova);
//    serhiyo.displayInformation();


    return 0;
}








