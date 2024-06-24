#include <iostream>
#include <vector>
#include <string>
#include "student.h"

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
    return daysToComplete[3];
}
DegreeProgram Student::GetDegree() {
    return program;
}
