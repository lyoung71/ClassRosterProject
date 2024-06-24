#include <iostream>
#include <vector>
#include <string>
#include "degree.h"
using namespace std;

class Student {
    public:
        Student();
        string GetID();
        string GetFirstName();
        string GetLastName();
        string GetEmail();
        int GetAge();
        int GetDays();
        int GetDegree();

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
        DegreeProgram program;

};
