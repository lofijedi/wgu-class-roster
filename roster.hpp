//
//  roster.hpp
//  WGU C867 Final
//
//
//

#pragma once
#include "student.hpp"

// defines what "student" is
    class Roster {
        private:
            int lastIndex = -1; // resets the position
            const static int numStudents = 5;
        
        public:
            Student* studentData[numStudents] = {nullptr, nullptr, nullptr, nullptr, nullptr};
            Roster();
            Student* getStudents(int i);
            void parse(string row);        
        
            // adds a new student to the roster
                void add(string addId, string addFirstName, string addLastName, string addEmailAddress, int addAge, int addCompDays1, int addCompDays2, int addCompDays3, DegreeProgram dProgram);
            
            // prints all student records
                void printAll();
            
            // prints by degree program
                void printDegreeProgram(DegreeProgram dProgram);
            
            // shows invalid records
                void printInvalidEmail();

            // shows average days in course
                void printAvgCompDays(string studentId);

            // remove record
                void removeStudent(string studentId);

            // destructor
                ~Roster();
    };
