#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student * students;
        int currentStudents;
    
    public:
        string getcourseCode();
        string getcourseName();
        int getmaxStudents();
        int getcurrentStudents();
        void setcourseCode();
        void setcourseName();
        void setmaxStudents();
        void setcurrentStudents();
        Course();
        Course(string courseCode,string courseName,int maxStudents, Student* students, int currentStudents);
        void addStudent(const Student& s);
        void displayCourseInfo();
        ~Course(){
            delete[] students;
        }
};












#endif
