//Окремий файл де будуть відбуватися stream insertion і extraction оператори.
#include <iostream>
#include <string.h>
#include "Worker.h"
#include "Company.h"


using namespace std;

    std::ostream &operator<<(std::ostream &os, const Company &obj)
    {
        cout<<"============================================="<<endl;
        cout<<"Name of the company is: "<<obj.nameOfTheCompany<<endl;
        cout<<"Amount of workers is: "<<*obj.amountOfWorkers<<endl;
        cout<<"Money fund of the company is: "<<*obj.moneyFund<<" EUR."<<endl;
        cout<<"============================================="<<endl;
    }

    std::istream &operator>>(std::istream &is, Company &obj)       //insertion operator for Company class
    {
        cout<<"Enter name of the company: ";
        getline(is, obj.nameOfTheCompany);
        int newAmountOfWorkers;
        cout<<"Enter number of workers: ";
        is >> newAmountOfWorkers;
        if(newAmountOfWorkers<0)
        {
            cout<<"Number of workers cannot be negative!";
        } else {obj.amountOfWorkers = new int(newAmountOfWorkers);}
        double newMoneyFund;
        cout<<"Enter money fund of the company (in EUR): ";
        is >> newMoneyFund;
        if(newMoneyFund < 0)
        {
            cout<<"Money fund cannot be negative!";
        } else {obj.moneyFund = new double(newMoneyFund);}
    }


    std::ostream &operator<<(std::ostream &os, const Worker &obj)  //extraction operator for Worker class
    {
        cout<<endl;
        os <<"Name: "<<obj.name<<endl;
        os <<"Age: "<<obj.age<<endl;
        os <<"Sex: "<<obj.sex<<endl;
        os <<"Job title: "<<obj.title<<endl;
        return os;
    }

    std::istream &operator>>(std::istream &is, Worker &obj)         //insertion operator for Worker class
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

