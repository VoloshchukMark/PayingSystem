#include <iostream>
#include <string.h>
#include "Worker.h"
#include "BankSystem.h"
#include "Company.h"


using namespace std;


    std::ostream &operator<<(std::ostream &os, const Worker &obj)
    {
        cout<<endl;
        os <<"Name: "<<obj.name<<endl;
        os <<"Age: "<<obj.age<<endl;
        os <<"Sex: "<<obj.sex<<endl;
        os <<"Job title: "<<obj.title<<endl;
        return os;
    }

    std::istream &operator>>(std::istream &is, Worker &obj)
    {
        cout<<"Enter the name: ";
        getline(is, obj.name);
        cout<<"Enter the age: ";
        is >> obj.age;
        cout << "Select the sex: \n 1.Male \n 2.Female \n 3.Other \n";
        int select = 0;
        is >> select;
        switch (select)
        {
        case 1:
            obj.sex = "Male";
            break;
        case 2:
            obj.sex = "Female";
            break;
        case 3:
            obj.sex = "Other";
        default:
            cout<<"Error!";
            break;
        }
        cout<<"Enter the job title: ";
        is >> obj.title;
        return is;
    }


int BankSystem::numberOfSalaries = 0;

int main()
{
    Worker mark;
    cin >> mark;
    cout << mark;
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



