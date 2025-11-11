#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:public Person{
    private:
        int experienceYears;
        string department;
    public:
        int getExperienceYears();
        string getDepartment();
        void setExperienceYears();
        void setDepartment();
        Instructor();
        Instructor(string name,int experienceYears,string department);
        void display();
        ~Instructor();
};











#endif
