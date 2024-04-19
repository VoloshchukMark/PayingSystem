#include <string.h>
#include <vector>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"
#include "Accountant.h"
#include "Interface.h"
#include <ctime>


using namespace std;





int BankSystem::numberOfSalaries = 0;



int main()
{
    vector<Employee> employees;
    srand(time(0));
//    Employee mark("Voloshchuk Mark", 18, "Male", "Furniture crafter", 40.0, 25.0);
//    Accountant vova;
//    vova.calculateSalary(mark);
//    mark.displaySalary();


    Interface interface1;
    interface1.startMenu();

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








