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
    Roster classRosterArray;

    const string studentData[] =
        {
            "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
            "A5,Landon,Young,lyou529@wgu.edu,29,15,28,81,SOFTWARE"
        };
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

        pos = pos + 1;
        nextPos = currSentence.find(",");
        daysInCourse2 = stoi(currSentence.substr(pos, nextPos));

        pos = pos + 1;
        nextPos = currSentence.find(",");
        daysInCourse3 = stoi(currSentence.substr(pos, nextPos));

        pos = pos + 1;
        strLength = currSentence.size();
        programString = currSentence.substr(pos, strLength);
        if (programString == "SOFTWARE") {
            program = SOFTWARE;
        } else if (programString == "NETWORK") {
            program = NETWORK;
        } else if (programString == "SECURITY") {
            program = SECURITY;
        }

    };
    return 0;
};
