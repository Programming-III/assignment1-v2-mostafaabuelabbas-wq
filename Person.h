#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
    private:
        string name;
        int id;
    public:
        string getname();
        int getif();
        void setname();
        void setId();
        Person();
        Person(string name , int id);
        void display();
        ~Person();
};











#endif
