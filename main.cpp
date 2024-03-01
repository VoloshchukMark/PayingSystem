#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"


using namespace std;



int main()
{
    {
        Worker worker1;
        worker1.changeInformation();
        worker1.showInformation();
    {
        BankSystem pay;
        pay.showAnnualSalary();
        pay.weeklyGrossPay();
        pay.bi_weeklyGrossPay();
        pay.monthlyGrossPay();
        pay.semi_monthlyGrossPay();
    }
    {
        Company company1("Slaveland", 69, 3000.0);
        company1.changeStatistic();
        company1.showStatistic();
    }
    return 0;
    }
}

