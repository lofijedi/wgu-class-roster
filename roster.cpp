//
//  roster.cpp
//  WGU C867 Final
//
//
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "roster.hpp"

// namespace organization
    using std::string;

Roster::Roster() {
    return;
}

void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int compDays1, int compDays2, int compDays3, DegreeProgram dProgram) {
    int compDays[3] = {compDays1, compDays2, compDays3};
    studentData[++lastIndex] = new Student(studentId, firstName, lastName, emailAddress, age, compDays, dProgram);
};

void Roster::parse(string studentData) {

    DegreeProgram dProgram = DegreeProgram::SOFTWARE;
    if (studentData.back() == 'K') dProgram = DegreeProgram::NETWORK;
    else if (studentData.back() == 'Y') dProgram = DegreeProgram::SECURITY;
    size_t rightSide = studentData.find(",");
    
    string pStudentId = studentData.substr(0, rightSide);
    size_t leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    string pFirstName = studentData.substr(leftSide, rightSide - leftSide);
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    string pLastName = studentData.substr(leftSide, rightSide - leftSide);
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    string pEmailAddress = studentData.substr(leftSide, rightSide - leftSide);
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    int pAge = stoi(studentData.substr(leftSide, rightSide - leftSide));
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    int pCompDay1 = stod(studentData.substr(leftSide, rightSide - leftSide));
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    int pCompDay2 = stod(studentData.substr(leftSide, rightSide - leftSide));
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    int pCompDay3 = stod(studentData.substr(leftSide, rightSide - leftSide));
    leftSide = rightSide + 1;
    rightSide = studentData.find(",", leftSide);
    
    add(pStudentId, pFirstName, pLastName, pEmailAddress, pAge, pCompDay1, pCompDay2, pCompDay3, dProgram);
};

void Roster::printAll() {
    Student::printHeader();
    for (int i = 0; i <= Roster::lastIndex; i++) Roster::studentData[i]->print();
};

void Roster::printDegreeProgram(DegreeProgram dProgram) {
    Student::printHeader();
    for (int i = 0; i < Roster::lastIndex; i++)
        if (Roster::studentData[i]->getDegreeProgram() == dProgram) studentData[i]->print();
};

Student* Roster::getStudents(int i) {
  return studentData[i];
}

void Roster::printInvalidEmail() {
    for (int i = 0; i <= Roster::lastIndex; i++) {
        string emailAddress = Roster::getStudents(i)->getEmailAddress();
        if(emailAddress.find(' ') != string::npos || emailAddress.find('.') == string::npos || emailAddress.find('@') == string::npos)
            cout << emailAddress << " is invalid." << endl;
    };
};

void Roster::printAvgCompDays(string studentId) {
    for (int i = 0; i <= Roster::lastIndex; i++) {
        if (studentData[i]->getStudentId() == studentId) {
            cout << studentId << ":";
            cout << (studentData[i]->getCompDays()[0] + studentData[i]->getCompDays()[1] + studentData[i]->getCompDays()[2]) / 3.0 << endl;
        };
    };
};

void Roster::removeStudent(string studentId) {
    bool success = false;
    for (int i = 0; i <= Roster::lastIndex; i++) {
        if (studentData[i]->getStudentId() == studentId) {
            success = true;
            Student* temp = studentData[i];
            studentData[i] = studentData[numStudents - 1];
            studentData[numStudents - 1] = temp;
            Roster::lastIndex--;
        };
    };
    
    if (success) {
        cout << "Student " << studentId << "has been removed from the Roster." << endl;
        printAll();
    }
    
    else cout << "Student " << studentId << "was not found." << endl;
};


Roster::~Roster() {
    for (int i = 0; i < numStudents; i++) {
        cout << "Destructor activated for Student: " << studentData[i]->getStudentId() << endl;
        delete studentData[i];
        studentData[i] = nullptr;
    };
};
