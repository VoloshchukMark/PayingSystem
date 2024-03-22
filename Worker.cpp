#include "Worker.h"
#include <iostream>
#include <string.h>

using namespace std;

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

