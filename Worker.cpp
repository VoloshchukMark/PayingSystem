#include "Worker.h"
#include <iostream>
#include <string.h>

using namespace std;


void Worker::changeName()
{
    string newName;
    cout<<"Enter a new name: ";
    getline(cin, newName);
    if (newName.size()>20)
    {
        cout<<"New name is too long. Try again."<<endl;
        newName.clear();
        changeName();
    } else if (newName.size()==0)
        {
            cout<<"New name is empty. Try again."<<endl;
            changeName();
        } else
            {
                name=newName;
                newName.clear();
                cout<<"The name was successfully updated.\n"<<endl;
            }
}

void Worker::changeNameM(string name)
{
    if (name.size()>20)
    {
        cout<<"New name is too long. Try again."<<endl;
    } else if (name.size()==0)
        {
            cout<<"New name is empty. Try again."<<endl;
        } else
            {
                this->name = name;
                cout<<"The name was successfully updated.\n"<<endl;
            }
}

void Worker::changeAge()
{
    int newAge;
    cout<<"Enter a new age: ";
    cin>>newAge;
    if (newAge<18)
    {
        cout<<"New age is too low to work officially. Try again."<<endl;
        changeAge();
    } else
        {
            age=newAge;
            cout<<"The age was successfully updated.\n"<<endl;
        }
}

void Worker::changeSex()
{
    string newSex;
    cout<<"Enter a new sex (Male/Female/Other): ";
    cin>>newSex;
    if (newSex!="Male"&&newSex!="Female"&&newSex!="Other")
    {
        cout<<"The entered sex is incorrect. Try again."<<endl;
        newSex.clear();
        changeSex();
    } else
        {
            sex=newSex;
            newSex.clear();
            cout<<"The sex was successfully updated.\n"<<endl;
        }
}

void Worker::changeTitle()
{
    string newTitle;
    cout<<"Enter a new job title: ";
    cin.ignore();
    getline(cin, newTitle);
    if (newTitle.size()>30)
    {
        cout<<"The new job title is too long. Try again."<<endl;
        newTitle.clear();
        changeTitle();
    } else if(newTitle.size()==0)
        {
            cout<<"The new job title is empty. Try again."<<endl;
            newTitle.clear();
            changeTitle();
        } else
        {
            title=newTitle;
            newTitle.clear();
            cout<<"The job title was successfully updated.\n"<<endl;
        }
}


void Worker::showInformation()
{
    cout<<"============================================="<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sex: "<<sex<<endl;
    cout<<"Job Title: "<<title<<endl;
    cout<<"============================================="<<endl;
}




Worker::Worker()
        :Worker("None", 0, "None", "None") {}
    Worker::Worker(string newName)
        :Worker(newName, 0, "None", "None") {}
    Worker::Worker(Worker &&other)
        :Worker(other.name, other.age, other.sex, other.title) {
            other.name.clear();
            other.age = 0;
            other.sex.clear();
            other.title.clear();
            }
    Worker::Worker(string newName, int newAge)
        :Worker(newName, newAge, "None", "None") {}
    Worker::Worker(string newName, int newAge, string newSex)
        :Worker(newName, newAge, newSex, "None") {}
    Worker::Worker(string newName, int newAge, string newSex, string newTitle)
        :name{newName}, age{newAge}, sex{newSex}, title{newTitle} {}
    Worker::~Worker() {}

