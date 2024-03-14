#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"
#include "Employee.h"


using namespace std;




int BankSystem::numberOfSalaries = 0;

int main()
{

//    Company walmart;
//    cin >> walmart;
//    cout << walmart;
    Employee mark;
    mark.displayInformation();
    Employee vova("Volodymyr", 18, "Male", "Slave", 500.0, 20.0);
    vova.displayInformation();



//    Worker mark;
//    cin >> mark;
//    cout << mark;
//    const BankSystem first(500.0);
//    first.showNumberOfSalaries();
//    {
//    first.showAnnualSalary();
//    BankSystem second(500.1);
//    second.showAnnualSalary();
//    first.semi_monthlyGrossPay();
//    first.monthlyGrossPay();
//    first.weeklyGrossPay();
//    first.showNumberOfSalaries();
//    }
//    first.showNumberOfSalaries();


//        BankSystem first(500.0);
//        BankSystem second(500.0);
//        first.salaryCompare(second);

//    Worker mark{"Mark"};
//    mark.showInformation();
//    Worker vova{move(mark)};
//    mark.showInformation();
//    vova.showInformation();
    return 0;
}








