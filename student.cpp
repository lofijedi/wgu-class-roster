//
//  student.cpp
//  WGU C867 Final
//
//
//

#include "student.hpp"

// constructor - sets values to default
    Student::Student() {
        this->studentId = "";
        this->firstName = "";
        this->lastName = "";
        this->emailAddress = "";
        this->age = int(age);
        for (int i = 0; i < completionDays; i++) this->compDays[i] = 0;
        this->degreeProgram = DegreeProgram::SOFTWARE;
    };

// constructor
    Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int compDays[], DegreeProgram degreeProgram){
        this->studentId = studentId;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        for (int i = 0; i < completionDays; i++) this->compDays[i] = compDays[i];
        this->degreeProgram = degreeProgram;
    };

// destructor
    Student::~Student(){};

// getters and setters
    void Student::setStudentId(string sId){
        this->studentId = sId;
    }
    void Student::setFirstName(string fName){
        this->firstName = fName;
    }
    void Student::setLastName(string lName){
        this->lastName = lName;
    }
    void Student::setEmailAddress(string eAddress){
        this->emailAddress = eAddress;
    }
    void Student::setAge(int sAge){
        this->age = sAge;
    }
    
    void Student::setCompDays(const int compDays[]) {
        for (int i = 0; i < completionDays; i++) this->compDays[i] = compDays[i];
    }

    void Student::setDegreeProgram(DegreeProgram degreeProgram){this->degreeProgram = degreeProgram;};




    string Student::getStudentId(){
        return this->studentId;
    }
    string Student::getFirstName(){
        return firstName;
    }
    string Student::getLastName(){
        return lastName;
    }
    string Student::getEmailAddress(){
        return emailAddress;
    }
    int Student::getAge(){
        return age;
    }
    const int* Student::getCompDays(){
        return compDays;
    }

    DegreeProgram Student::getDegreeProgram(){return this->degreeProgram;};


// prints the headers for the table
    void Student::printHeader() {
        cout << "Student Id\t";
        cout << "First Name\t";
        cout << "Last Name\t";
        cout << "Email Address\t";
        cout << "Student Age\t";
        cout << "Course 1 - Completion Days\t";
        cout << "Course 2 - Completion Days\t";
        cout << "Course 3 - Completion Days\t";
        cout << "Degree Name\t";
        cout << endl;
    };

// prints the student's information
    void Student::print() {
        cout << this->studentId << '\t';
        cout << this->firstName << '\t';
        cout << this->lastName << '\t';
        cout << this->emailAddress << '\t';
        cout << this->age << '\t';
        cout << this->compDays[0] << '\t';
        cout << this->compDays[1] << '\t';
        cout << this->compDays[2] << '\t';
        cout << degreeName[(int)this->degreeProgram];
        cout << endl;
    };
