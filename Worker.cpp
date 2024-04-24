#include "Worker.h"
#include <iostream>
#include <string.h>

using namespace std;


    void Worker::setId(int newId)
    {
        this->id = newId;
    }



    string Worker::getName()
    {
        return name;
    }
    int Worker::getAge()
    {
        return age;
    }
    string Worker::getSex()
    {
        return sex;
    }
    string Worker::getTitle()
    {
        return title;
    }
    Worker::getId()
    {
        return id;
    }



    void Worker::changeName(string newName)
    {
        name = newName;
    }
    void Worker::changeAge(int newAge)
    {
        age = newAge;
    }
    void Worker::changeSex(string newSex)
    {
        sex = newSex;
    }
    void Worker::changeTitle(string newTitle)
    {
        title = newTitle;
    }


    void Worker::displayName()
    {
        cout<<"Name: "<<name<<endl;
    }
    void Worker::displayAge()
    {
        cout<<"Age: "<<age<<endl;
    }
    void Worker::displaySex()
    {
        cout<<"Sex: "<<sex<<endl;
    }
    void Worker::displayTitle()
    {
        cout<<"Job title: "<<title<<endl;
    }

    Worker::Worker(const Worker &obj)
        :name{obj.name}, age{obj.age}, sex{obj.sex}, title{obj.title}, id{obj.id} {}



//    Worker::Worker(string newName)
//        :Worker(newName, 0, "None", "None") {}
//    Worker::Worker(Worker &&other)
//        :Worker(other.name, other.age, other.sex, other.title) {
//            other.name.clear();
//            other.age = 0;
//            other.sex.clear();
//            other.title.clear();
//            }

    Worker::Worker()
        :Worker("None", 0, "None", "None", 0) {}
//    Worker::Worker(string newName, int newAge)
//        :Worker(newName, newAge, "None", "None", 0) {}
    Worker::Worker(string newName, int newAge, string newSex)
        :Worker(newName, newAge, newSex, "None", 0) {}
    Worker::Worker(string newName, int newAge, string newSex, string newTitle, double newId)
        :name{newName}, age{newAge}, sex{newSex}, title{newTitle}, id{newId} {}
    Worker::~Worker() {}

