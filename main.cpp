#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;


    void Person::display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }


// ==================== Student Class Implementation ====================

    void Student::display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"YearLevel: "<<yearLevel<<endl;
        cout<<"major: "<<major<<endl;
    }


// ==================== Instructor Class Implementation ====================


    void Instructor::display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"departemnt: "<<department<<endl;
        cout<<"ExperienceYears: "<<experienceYears<<endl;
    }


// ==================== Course Class Implementation ====================

    void Course::addStudent(const Student& s){
        if(currentStudents<maxStudents)
            students[currentStudents]=s;
        else 
            cout<<"The array is full"<<endl;
    }
    void Course::displayCourseInfo(){
        cout<<courseCode<<"-"<<courseName<<endl;
        cout<<"Max students: "<<maxStudents<<endl;
        cout<<"Current enrolled: "<<currentStudents<<endl;
        
    }








// ==================== Main Function ====================
int main() {
    Student s(mostafa,cs,2);
   s.display();
    Course c(1122,cs,23,s,2);
   c.display();
   c.addStudent(s);    
    Instructor i(moss,cs,2);
   i.display();
    return 0;
}
