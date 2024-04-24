#include "Interface.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <vector>
#include "Employee.h"
#include <typeinfo>

using namespace std;


void logAdmin();
void logEmployee();
void adminMenu();
void employeeMenu();

void collectInfo();
void saveInfo();
void employeeCheck();
void hireAnEmployee();

int Interface::startMenu()
{
    system("cls");
    cout<<"==================================================================="<<endl;
    cout<<"Welcome! Choose your title: \n1.Administrator. \n2.Accountant. \n3.Employee. \n4.Exit."<<endl;
    int title = 0;
    cin>>title;
    switch (title)
    {
    case 1:
        logAdmin();
        break;
    case 2:
        break;
    case 3:
        logEmployee();
        break;
    case 4:
        return 0;
    default:
        cout<<"Error! Try again.\n"<<endl;
        break;
    }
    startMenu();
}

void Interface::logAdmin()
{
    string login;
    string password;
    cout<<"\n1.Log in \n2.Back"<<endl;
    int choose = 0;
    cin>>choose;
    switch (choose)
    {
    case 1:{
        string check;
        cin.ignore();
        cout<<"\nEnter your login: ";
        getline(cin,login);
        cout<<"Enter your password: ";
        getline(cin,password);
        ifstream signin1("Administrator.txt");
        signin1>>check;
        if (login == check)
        {
            signin1>>check;
            if(password == check)
            {
                signin1.close();
                adminMenu();
                return;
            }
        }
        cout<<"Error! Wrong login or password.";
        cout<<endl;
        login.clear();
        password.clear();
        signin1.close();
        break;
    }
    case 2:{
        cout<<endl;
        return;
    }
    default:{
        cout<<"Error! Try again."<<endl;
        break;
        }
    }
    logAdmin();
}

void Interface::logEmployee()
{
E1: string login;
    string password;
    int Id, IdCheck;
    string infoCheck;

    cout<<"\n1.Log in \n2.Sign in \n3.Back"<<endl;
    int choose = 0;
    cin>>choose;
    switch (choose)
    {
    case 1:
        {
            collectInfo();
            cin.ignore();
            cout<<"\nEnter your login: ";
            getline(cin,login);
            cout<<"Enter your password: ";
            getline(cin,password);
            ifstream EmployeeLogin("EmployeeAccess.txt");
            while (!EmployeeLogin.eof())
            {
                EmployeeLogin>>Id>>infoCheck;
                if(infoCheck == login)
                {
                    EmployeeLogin>>infoCheck;
                    if(infoCheck == password)
                    {
                        for(Employee &obj : employees)
                        {
                            if(Id == obj.getId())
                            {
                                selectedEmployee = obj;
                                if (selectedEmployee.getTitle() == "Accountant")
                                {
                                    cout<<"\nError! Current account has Accountant title.\n(Hint: You can login as Accountant in Start Menu.)\n";
                                    system("pause");
                                    return;
                                }
                                cout<<"\nLog in was successful.\n";
                                system("pause");
                                employeeMenu();
                                return;
                            }
                        }
                    }else {goto E2;}
                } else {EmployeeLogin>>infoCheck;}
E2:             cout<<infoCheck<<endl;
            }
            cout<<"Error! Wrong login or password.\n";
            break;
        }
    case 2:
        {
            cout<<endl<<"Enter your ID (you should get it from Administrator): ";
            cin>>Id;
            ifstream EmployeesAccess("EmployeeAccess.txt");
            while(!EmployeesAccess.eof())
            {
                EmployeesAccess>>IdCheck;
                if(Id == IdCheck)
                {
                    cout<<"There is already registered account in data base with such ID.\n";
                    goto E1;
                    return;
                }
                EmployeesAccess>>infoCheck>>infoCheck;
            }
            collectInfo();
            for (auto &obj : employees)
            {
                if (obj.getId() == Id)
                {
                    selectedEmployee = obj;
                    if (selectedEmployee.getTitle() == "Accountant")
                    {
                        cout<<"\nError! Current account belongs to Accountant title.\n(Hint: You can sign in as Accountant in Start Menu.)\n";
                        system("pause");
                        return;
                    }
                    cout<<"Enter your login: ";
                    cin>>login;
                    cout<<"Enter your password: ";
                    cin>>password;
                    ofstream employeeSignIn("EmployeeAccess.txt", ios_base::app);
                    employeeSignIn<<Id<<"  "<<login<<"  "<<password<<endl;
                    cout<<"\nThe registration was successful.\n";
                    employees.clear();
                    system("pause");
                    employeeMenu();
                    return;
                }
            }
            cout<<"There is no registered employee with such ID.\n";
            break;
        }
    case 3:
        {
            return;
        }
    default:{
            cout<<"Error! Try again."<<endl;
            break;
        }
    }
    logEmployee();
}

void Interface::adminMenu()
{
    collectInfo();
    system("cls");
    cout<<"==================================================================="<<endl;
    cout<<"Administrator menu:\n";
    cout<<"1.Show information of Employees.\n";
    cout<<"2.Hire an employee.\n";
    cout<<"3.Log out.\n";
    int choice = 0;
    cin>>choice;
    switch (choice)
    {
        case 1:{
        cout<<endl;
        employeeCheck();
        break;
        }

        case 2:{
        cout<<endl;
        hireAnEmployee();
        break;
        }
        case 3:{
            amountOfEmployee = 0;
            employees.clear();
            return;
        }
        default:{
            cout<<"Error! Try again."<<endl;
            break;
        }
    }
    adminMenu();
}

void Interface::employeeMenu()
{
    system("cls");
    cout<<"==================================================================="<<endl;
    cout<<"Employee menu ("<<selectedEmployee.getName()<<"):\n";
    cout<<"1.Work.\n";
    cout<<"2.Show information.\n";
    cout<<"3.Log out.\n";
    cout<<"4.Save and Log out.\n";
    int choice = 0;
    cin>>choice;
    switch (choice)
    {
    case 1:{
            cout<<"\nWork in progress..."<<endl;
            system("pause");
            double newWorkingTime = (rand() % 10) + selectedEmployee.getWorkingTime();
            selectedEmployee.setWorkingTime(newWorkingTime);
            cout<<"\nCongratulation! Now your total working time is: "<<selectedEmployee.getWorkingTime()<<" hours!\n";
            system("pause");
            break;
        }
    case 2:{
            selectedEmployee.displayInformation();
            system("pause");
            break;
        }
    case 3:{
            return;
        }
    case 4:{
            collectInfo();
            for(auto &obj : employees)
            {
                if (selectedEmployee.getId() == obj.getId())
                {
                    obj.setWorkingTime(selectedEmployee.getWorkingTime());
                    saveInfo();
                    employees.clear();
                    return;
                }
            }
            employees.clear();
            return;
        }
    default:{
            cout<<"Error! Try again."<<endl;
            break;
        }
    }
    employeeMenu();
}


void Interface::collectInfo()
{
    employees.clear();
        ifstream employeeDataR1("EmployeeData.txt", ios_base::out);
        string check;
        employeeDataR1>>check;
//        cout<<endl<<check<<" "<<check.size()<<endl;
        if (check.size() > 1)
        {
            do{
            string name, sex, title, task;
            double workingTime, hourlyRate, salary, Id;
            int age = 0;
            name = check + " ";
            employeeDataR1>>check;
            name += check;
            employeeDataR1>>age>>sex>>title>>workingTime>>hourlyRate>>task>>salary>>Id;
            Employee employeeInfo(name, age, sex, title, Id, workingTime, hourlyRate, task, salary);
            employeeDataR1>>check;
            employees.push_back(employeeInfo);
//            amountOfEmployee++;
            }while (!employeeDataR1.eof());
            employeeDataR1.close();
        }
}

void Interface::saveInfo()
{
    ofstream EmployeeDataWr("EmployeeData.txt");
    for(auto &obj : employees)
    {
        EmployeeDataWr<<obj.getName()<<"   "<<obj.getAge()<<"   "<<obj.getSex()<<"   "<<obj.getTitle()<<"   "<<obj.getWorkingTime()<<"   ";
        EmployeeDataWr<<obj.getHourlyRate()<<"   "<<obj.getTask()<<"   "<<obj.getSalary()<<"   "<<obj.getId()<<"\n";
    }
    return;
}


void Interface::hireAnEmployee()
{
    ofstream employeeDataWr("EmployeeData.txt", ios_base::app);
    string name, firstName, secondName, sex, title, anything;
    int age = 0, sexChoice = 0;
a1:    cout<<"Enter the first name: ";
    cin.ignore();
    getline(cin,firstName);
    if(firstName.size() == 0)
    {
        cout<<"Error! Incorrect first name. Try again.\n\n";
        goto a1;
    }
a11:    cout<<"Enter the second name: ";
    getline(cin,secondName);
    if(secondName.size() == 0)
    {
        cout<<"Error! Incorrect second name. Try again.\n\n";
        goto a11;
    }
    name = firstName + " " + secondName;
a2:    cout<<"Enter the age: ";
    cin>>age;
    if(age <18)
    {
        cout<<"Too young.\n\n";
        goto a2;
    } else if(age>50)
    {
        cout<<"Too old.\n\n";
        goto a2;
    }
a3:    cout<<"Select the sex:\n 1.Male. \n 2.Female. \n 3.Other. \n";
    cin>>sexChoice;
    switch (sexChoice)
    {
    case 1:
        sex = "Male";
        break;
    case 2:
        sex = "Female";
        break;
    case 3:
        sex = "Other";
        break;
    default:
        cout<<"Error! Try again.\n\n";
        goto a3;
        break;
    }
a4:    cout<<"Enter the job title: ";
    cin.ignore();
    getline(cin, title);
    if (title.size() == 0)
    {
        cout<<"Please enter the job title properly!\n\n";
        goto a4;
    }else if (title == "Accountant")
    {
        cout<<"Sorry, you cant choose this title now\n\n";
        goto a4;
    }
    srand(time(0));
a5:    double ID = (rand()%299) + 1000;
    int double1 = 0;
    for (auto &obj : employees)
    {
        if (obj.getId() == ID)
            double1++;
    }
    if (double1 > 0)
        goto a5;
    employeeDataWr<<name<<"  ";
    employeeDataWr<<age<<"  ";
    employeeDataWr<<sex<<"  ";
    employeeDataWr<<title<<"  ";
    employeeDataWr<<0.0<<"  ";        //Working time.
    employeeDataWr<<0.0<<"  ";        //Hourly rate.
    employeeDataWr<<"None"<<"  ";     //Task.
    employeeDataWr<<0.0<<"  ";        //Salary.
    employeeDataWr<<ID<<"\n";
    employeeDataWr.close();
    Employee employeeInfo(name, age, sex, title, ID, 0.0, 0.0, "None", 0.0);
    employees.push_back(employeeInfo);
    amountOfEmployee++;
    cout<<"Finished. ID of the Employee is: "<<ID<<endl;
    system("pause");
    return;
}



    void Interface::employeeCheck()
    {
        ifstream employeeDataR("EmployeeData.txt", ios_base::out);
        string check;
        employeeDataR>>check;
        if (check.size() == 0)
        {
            cout<<"There is no information about the employees at the moment.\nYou may add it in the Administrator menu.\n\n";
            employeeDataR.close();
            system("pause");
            adminMenu();
        } else
            {
                for(auto &obj : employees)
                {
                    obj.displayInformation();
                }
            }
            system("pause");
            return;
    }



    Interface::Interface() {}
