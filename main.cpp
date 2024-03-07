#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"


using namespace std;

int BankSystem::numberOfSalaries = 0;

int main()
{
    const BankSystem first(500.0);
    {
    first.showNumberOfSalaries();
    first.showAnnualSalary();
    BankSystem second(500.1);
    second.showAnnualSalary();
    first.semi_monthlyGrossPay();
    first.monthlyGrossPay();
    first.weeklyGrossPay();
    first.showNumberOfSalaries();
    }
    first.showNumberOfSalaries();
    return 0;
}












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
//    Worker mark{"Mark"};
//    mark.showInformation();
//    Worker vova{move(mark)};
//    mark.showInformation();
//    vova.showInformation();



