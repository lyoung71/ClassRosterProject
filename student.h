#include <iostream>
#include <vector>
#include <string>
#include "degree.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    public:
        Student();
        Student(string studID, string fN, string lN, string email, int studAge, int days[3], DegreeProgram prog);
        string GetID();
        string GetFirstName();
        string GetLastName();
        string GetEmail();
        int GetAge();
        int GetDays();
        enum DegreeProgram GetDegree();

        void SetID(string ID);
        void SetFirstName(string first);
        void SetLastName(string last);
        void SetEmail(string email);
        void SetAge(int studentAge);
        void SetDays(int daysLeft);
        void SetDegree(DegreeProgram degProg);

        void Print();

    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int daysToComplete[3];
        enum DegreeProgram degreeProgram;
};

#endif
