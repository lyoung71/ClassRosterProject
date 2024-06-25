#include <iostream>
#include <vector>
#include <string>
#include "student.h"

Student::Student() {
    studentID = "No ID";
    firstName = "No first name";
    lastName = "No last name";
    emailAddress = "No email address";
    age = -1;
    daysToComplete[2] = {};
    degreeProgram = {};
}


string Student::GetID() {
    return studentID;
}
string Student::GetFirstName() {
    return firstName;
}
string Student::GetLastName() {
    return lastName;
}
string Student::GetEmail() {
    return emailAddress;
}
int Student::GetAge() {
    return age;
}
int Student::GetDays() {
    return daysToComplete[2];
}
DegreeProgram Student::GetDegree() {
    return degreeProgram;
}

//Setter Functions
void Student::SetID(string ID) {
    studentID = ID;
}

void Student::SetFirstName(string first) {
    firstName = first;
}

void Student::SetLastName(string last) {
    lastName = last;
}

void Student::SetEmail(string email) {
    emailAddress = email;
}

void Student::SetAge(int studentAge) {
    age = studentAge;
}

void Student::SetDays(int daysLeft) {
    daysToComplete[2] = daysLeft;
}

void Student::SetDegree(DegreeProgram degProg) {
    degreeProgram = degProg;
}

void Student::Print() {
    cout << studentID << endl;
    cout << firstName << endl;
    cout << lastName << endl;
    cout << emailAddress << endl;
    cout << age << endl;
    cout << daysToComplete << endl;
    cout << degreeProgram << endl;
}
