#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#ifndef ROSTER_H
#define ROSTER_H
using namespace std;

string studentID, firstName, lastName, emailAddress, currSentence, ageString, programString;
int age, daysInCourse1, daysInCourse2, daysInCourse3, daysList[3], i, pos, nextPos, strLength;
DegreeProgram degreeProgram;

class Roster {
    public:
        Roster();
        ~Roster();
        void add();
        // void remove(string studentID);
        void printAll();
        // void printAverageDaysInCourse(string studentID);
        // void printInvalidEmails();
        // void printByDegreeProgram(DegreeProgram degreeProgram);

    private:
        int size;
        Student *classRosterArray[];
        };

#endif
