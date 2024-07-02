#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"

using namespace std;

int main() {

    cout << "Scripting and Programming - Applications - C867" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Student ID: 012213586" << endl;
    cout << "Name: Landon Young" << endl;

    string studentID, firstName, lastName, emailAddress, currSentence, ageString, programString;
    int age, daysInCourse1, daysInCourse2, daysInCourse3, i, pos, nextPos, strLength;
    DegreeProgram program;
    Roster classRoster;

    classRoster.add();
    classRoster.printAll();

    return 0;
};
