#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"


using namespace std;



int main()
{
//    {
//        Worker worker1;
//        worker1.changeInformation();
//        worker1.showInformation();
//    }
//        BankSystem first(500.0);
//        first.showAnnualSalary();
//        second.showAnnualSalary();
//    Worker mark("Name");
//    {
//        Worker worker1;
//        worker1.changeNameM("Boba");
//        worker1.showInformation();
//    }
//        BankSystem first(500.0);
//        BankSystem second(500.0);
//        first.SalaryCompare(second);
    Worker mark{"Mark"};
    mark.showInformation();
    Worker vova{move(mark)};
    mark.showInformation();
    vova.showInformation();
    return 0;
}


