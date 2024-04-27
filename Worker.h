#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string.h>
#include "Display.h"

using namespace std;


class Worker: public Display
{
private:
    string name;
    int age;
    string sex;
    string title;
    int id;

public:
    void setId(int newId);

    string getName();
    int getAge();
    string getSex();
    string getTitle();
    int getId();

    void changeName(string newName);
    void changeAge(int newAge);
    void changeSex(string newSex);
    void changeTitle(string newTitle);
    void changeId(int newId);

    virtual void displayName() override;
    virtual void displayAge()override;
    virtual void displaySex()override;
    virtual void displayTitle()override;

    Worker& operator =(const Worker &other)
    {
        if(this != &other)
        {
            name.assign(other.name);
            age = other.age;
            sex.assign(other.sex);
            title.assign(other.title);
            id = other.id;
        }
        return *this;
    }

    Worker(const Worker &obj);

    Worker();
    Worker(string newName);
    Worker(Worker &&other);
    Worker(string newName, int newAge);
    Worker(string newName, int newAge, string newSex);
    Worker(string newName, int newAge, string newSex, string newTitle, double newId);
    virtual ~Worker();
    friend std::ostream &operator<<(std::ostream &os, const Worker &obj);
    friend std::istream &operator>>(std::istream &is, Worker &obj);
};

#endif // WORKER_H
