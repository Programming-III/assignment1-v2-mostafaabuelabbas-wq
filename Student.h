#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student:public Person{
    private:
        string major;
        int yearLevel;
    public:
        string getMajor();
        int getYearlevel();
        void setMajor();
        void getYearlevel();

        Student();
        Student(string name, string major, int yearlevel);
        void display();
        ~Student();
};













#endif
