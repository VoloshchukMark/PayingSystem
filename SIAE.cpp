//Окремий файл де будуть відбуватися stream insertion і extraction оператори.
#include <iostream>
#include <string.h>
#include "Worker.h"
#include "Company.h"
#include "Employee.h"
#include "Accountant.h"


using namespace std;

    std::ostream &operator<<(std::ostream &os, const Company &obj)      //extraction operator for Company class
    {
        cout<<"============================================="<<endl;
        cout<<"Name of the company is: "<<obj.name<<endl;
        cout<<"Amount of workers is: "<<*obj.amountOfWorkers<<endl;
        cout<<"Money fund of the company is: "<<*obj.moneyFund<<" EUR."<<endl;
        cout<<"============================================="<<endl;
    }

    std::istream &operator>>(std::istream &is, Company &obj)       //insertion operator for Company class
    {
        cout<<"Enter name of the company: ";
        getline(is, obj.name);
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
        os <<"Name: "<<obj.name<<endl;
        os <<"Age: "<<obj.age<<endl;
        os <<"Sex: "<<obj.sex<<endl;
        os <<"Job title: "<<obj.title<<endl;
        return os;
    }

    std::ostream &operator<<(std::ostream &os, const Employee &obi) //extraction operator for Employee class
    {
//        cout<<"============================================="<<endl;
        os<<(Worker)obi;
//        cout<<"=============================================\n"<<endl;
    }



    std::istream &operator>>(std::istream &is, Worker &obj)         //insertion operator for Worker class
    {
        string newName;
        cout<<"Enter the name: ";
        getline(is, newName);
        if (newName.size() < 1)
        {
            cout<<"Name cannot be empty!\n";
            newName.clear();
        }else {obj.name = newName; newName.clear();}
        int newAge = 0;
        cout<<"Enter the age (18 or higher): ";
        is >> newAge;
        if (newAge < 18)
        {
            cout<<"We do not accept child labour!\n";
        }else {obj.age = newAge;}
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
            cout<<"Error!\n";
            break;
        }
        string newTitle;
        cout<<"Enter the job title: ";
        is >> newTitle;
        if (newTitle.size() < 1)
        {
            cout<<"The name of the job title cannot be empty!\n";
            newTitle.clear();
        }else {obj.title = newTitle; newTitle.clear();}

        return is;
    }

