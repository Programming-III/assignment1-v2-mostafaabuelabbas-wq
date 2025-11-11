#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:public Person{
    private:
        int experienceYears;
        string department;
    public:
        Instructor();
        Instructor(string name,int experienceYears,string department);
        void display();
        ~Instructor();
};











#endif
