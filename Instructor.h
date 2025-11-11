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
        Instructor(string name,int id,int experienceYears,string department):Person(name, id){};
        void display();
        ~Instructor();
};











#endif
