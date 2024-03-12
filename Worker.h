#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string.h>

using namespace std;


class Worker
{
private:
    string name;
    int age;
    string sex;
    string title;
public:
    void showInformation();
    void changeName();
    void changeNameM(string newName);
    void changeAge();
    void changeSex();
    void changeTitle();
    void switchTitle(const Worker &other);
    void changeInformation()
    {
        changeName();
        changeAge();
        changeSex();
        changeTitle();
    }
    friend std::ostream &operator<<(std::ostream &os, const Worker &obj);

    Worker();
    Worker(string newName);
    Worker(Worker &&other);
    Worker(string newName, int newAge);
    Worker(string newName, int newAge, string newSex);
    Worker(string newName, int newAge, string newSex, string newTitle);
    ~Worker();
    friend std::ostream &operator<<(std::ostream &os, const Worker &obj);
    friend std::istream &operator>>(std::istream &os, Worker &obj);
};

#endif // WORKER_H
