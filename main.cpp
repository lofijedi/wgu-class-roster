//
//  main.cpp
//  WGU C867 Final
//
//
//

#include <iostream>
#include <string>
#include "roster.hpp"

using namespace std;

int main() {
    
    // import data and my information

        cout << "Scripting and Programming - Applications - C867" << endl;
        cout << "Language : C++" << endl;
        cout << "Student Id : #000123456" << endl;
        cout << "Name : First Name" << endl;
        
        const string studentData[] = {
            "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
            "A5,First,Name,smericle@student.wgu.edu,28,20,53,18,SOFTWARE"
            
        };
    
    const int numStudents = 5;
    Roster roster;
    
    for (int i = 0; i < numStudents; i++) roster.parse(studentData[i]);
    cout << "Displaying all Students: " << endl;
    roster.printAll();
    
    for (int i = 0; i < 3; i++) {
        cout << "Displaying by Degree Program: " << degreeName[i] << endl;
        roster.printDegreeProgram((DegreeProgram)i);
    };
    
    cout << "Displaying invalid email addess: " << endl;
    roster.printInvalidEmail();
    
    cout << "Displaying Students Average Completion Time: " << endl;
    for (int i = 0; i < numStudents; i++) roster.printAvgCompDays(roster.getStudents(i)->getStudentId());
    

    cout << "Remove Student A3" << endl;
    roster.removeStudent("A3 ");
    
    cout << "Finished. Destructors called automatically." << endl;
    return 0;


};
