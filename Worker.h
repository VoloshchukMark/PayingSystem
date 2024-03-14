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

    Worker();
    Worker(string newName);
    Worker(Worker &&other);
    Worker(string newName, int newAge);
    Worker(string newName, int newAge, string newSex);
    Worker(string newName, int newAge, string newSex, string newTitle);
    ~Worker();
    friend std::ostream &operator<<(std::ostream &os, const Worker &obj);
    friend std::istream &operator>>(std::istream &is, Worker &obj);
};

#endif // WORKER_H
