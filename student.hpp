//
//  student.hpp
//  WGU C867 Final
//
// 
//

#pragma once
#include <iostream>
#include <iomanip>
#include "degree.hpp"

// namespace organization
    using std::string;
    using std::cout;
    using std::endl;
    using std::left;
    using std::setw;

// defines what "student" is
    class Student {
    
        public:
            const static int completionDays = 3;
        
        private:
            string studentId;
            string firstName;
            string lastName;
            string emailAddress;
            int age;
            int compDays[completionDays];
            DegreeProgram degreeProgram;
        
        public:
            // construtor - sets values to default
                Student();
            
            // constructor
                Student(string studentId, string firstName, string lastName, string emailAddress, int age, int compDays[], DegreeProgram degreeProgram);
            
            // destructor
                ~Student();
        
            // getters and setters
                string getStudentId();
                void setStudentId(string sId);
                
                string getFirstName();
                void setFirstName(string fName);
                
                string getLastName();
                void setLastName(string lName);
                
                string getEmailAddress();
                void setEmailAddress(string eAddress);
                
                int getAge();
                void setAge(int sAge);
                
                const int* getCompDays();
                void setCompDays(const int cDays[]);
                
                DegreeProgram getDegreeProgram();
                void setDegreeProgram(DegreeProgram dProgram);
        
            // prints the headers for the table
                static void printHeader();
            
            // prints the student's information
                void print();
    
    };

