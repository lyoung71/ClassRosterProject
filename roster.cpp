#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "roster.h"
using namespace std;

const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Landon,Young,lyou529@wgu.edu,29,15,28,81,SOFTWARE"
    };

Roster::Roster() {
    int size = 5;
    Student *classRosterArray = new Student[size];
};

void Roster::add() {
    for (i = 0; i < 5; ++i) {
        currSentence = studentData[i];
        pos = currSentence.find(",");
        studentID = currSentence.substr(0, pos);

        pos = pos + 1;
        nextPos = currSentence.find(",");
        firstName = currSentence.substr(pos, nextPos);

        pos = pos + 1;
        nextPos = currSentence.find(",");
        lastName = currSentence.substr(pos, nextPos);

        pos = pos + 1;
        nextPos = currSentence.find(",");
        emailAddress = currSentence.substr(pos, nextPos);

        pos = pos + 1;
        nextPos = currSentence.find(",");
        age = stoi(currSentence.substr(pos, nextPos));

        pos = pos + 1;
        nextPos = currSentence.find(",");
        daysInCourse1 = stoi(currSentence.substr(pos, nextPos));
        cout << daysInCourse1<< endl;

        pos = pos + 1;
        nextPos = currSentence.find(",");
        daysInCourse2 = stoi(currSentence.substr(pos, nextPos));

        pos = pos + 1;
        nextPos = currSentence.find(",");
        daysInCourse3 = stoi(currSentence.substr(pos, nextPos));
        daysList[0] = daysInCourse1;
        daysList[1] = daysInCourse2;
        daysList[2] = daysInCourse3;

        pos = pos + 1;
        strLength = currSentence.size();
        programString = currSentence.substr(pos, strLength);
        if (programString == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        } else if (programString == "NETWORK") {
            degreeProgram = NETWORK;
        } else if (programString == "SECURITY") {
            degreeProgram = SECURITY;
        }

        Student newStudent(studentID, firstName, lastName, emailAddress, age, &daysList[2], degreeProgram);
        this->classRosterArray[i] = &newStudent;
        };
    };

// void remove(string studentID);
void Roster::printAll() {
    for (i = 0; i < 5; ++i) {
        classRosterArray[i]->Print();
    };
};
// void printAverageDaysInCourse(string studentID);
// void printInvalidEmails();
// void printByDegreeProgram(DegreeProgram degreeProgram);
