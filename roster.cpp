#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "roster.h"
#include "main.cpp"
using namespace std;

Roster::Roster() {
    size = 5;
    arr = new Student*[size];
};

void Roster::add(Student newStudent) {
    arr.push_back(newStudent);
    };
void remove(string studentID);
void printAll();
void printAverageDaysInCourse(string studentID);
void printInvalidEmails();
void printByDegreeProgram(DegreeProgram degreeProgram);
