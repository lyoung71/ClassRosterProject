#include <iostream>
#include <vector>
#include <string>
#include "student.h"


Student::Student(){}
Student::Student(string studID, string fN, string lN, string email, int studAge, int days[3], DegreeProgram prog) {
    studentID = studID;
    firstName = fN;
    lastName = lN;
    emailAddress = email;
    age = studAge;
    daysToComplete[2] = days[3];
    degreeProgram = prog;
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
    this->studentID = ID;
}

void Student::SetFirstName(string first) {
    this->firstName = first;
}

void Student::SetLastName(string last) {
    this->lastName = last;
}

void Student::SetEmail(string email) {
    this->emailAddress = email;
}

void Student::SetAge(int studentAge) {
    this->age = studentAge;
}

void Student::SetDays(int daysLeft) {
    this->daysToComplete[2] = daysLeft;
}

void Student::SetDegree(DegreeProgram degProg) {
    this->degreeProgram = degProg;
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
