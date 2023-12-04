#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
    public:
        Student(char* firstname, char* lastname, float gpa, int studentID);
        ~Student();
        char* getFirstname(void);
        char* getLastname(void);
        float getGPA(void);
        int getStudentID(void);
    private:
        char* firstname;
        char* lastname;
        float gpa;
        int studentID;
};

#endif