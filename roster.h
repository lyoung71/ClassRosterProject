#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#ifndef ROSTER_H
#define ROSTER_H
using namespace std;

class Roster {
    public:
        Roster();
        void add(Student newStudent);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

    private:
        int size;
        Student *arr[5];
        };

#endif
