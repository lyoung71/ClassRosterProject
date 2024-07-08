#include <iostream>
#include <vector>
#include <string>
#include "student.h"


Student::Student(){}
Student::Student(string studID, string fN, string lN, string email, int studAge, int days1, int days2, int days3, DegreeProgram prog) {
    studentID = studID;
    firstName = fN;
    lastName = lN;
    emailAddress = email;
    age = studAge;
    daysToComplete[0] = days1;
    daysToComplete[1] = days2;
    daysToComplete[2] = days3;
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

void Student::SetDays(int days1, int days2, int days3) {
    this->daysToComplete[0] = days1;
    this->daysToComplete[1] = days2;
    this->daysToComplete[2] = days3;

}

void Student::SetDegree(DegreeProgram degProg) {
    this->degreeProgram = degProg;
}

void Student::Print() const {
    cout << studentID <<
        "\t First Name: " << firstName <<
        "\t Last Name: " << lastName <<
        "\t Age: " << this->age <<
        "\t daysInCourse: " << this->daysToComplete <<
        "\t Degree Program: " << this->degreeProgram << "\n";

}
