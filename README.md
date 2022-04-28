# C++ Project
Project to showcase my understanding of C++. I used Xcode as my IDE.

# Competencies

### 4048.2.1 : Introduction to Programming

 - The graduate applies fundamental programming concepts in a specific programming environment.

### 4048.2.2 : Variables and Data Types

 - The graduate prepares code which declares, initializes, and assigns values to variables of appropriate types as part of the application development process.

### 4048.2.3 : Control Structures

 - The graduate writes code that implements decision and loop constructs to control the flow of a program.

### 4048.2.4 : Arrays

 - The graduate creates arrays in order to solve complex problems.

### 4048.2.5 : Pointers and Memory

 - The graduate applies pointers to solve complex problems.

### 4048.2.6 : Functions

 - The graduate writes code that creates and manipulates functions and files.

### 4048.2.7 : Object-Oriented Paradigm

 - The graduate applies object-oriented programming concepts in order to create a basic application.

# Introduction


Throughout your career in software development, you will develop and maintain new and existing applications. You will be expected to fix issues as well as add new enhancements or migrate existing applications to new platforms or different programming languages. As a software developer, your role will be to create a design of an application based on given business requirements. After the design is completed, you must implement the application based on the design document and provided requirements.

In this assessment, you will create a C++ application based on the scenario below. The skills you demonstrate in your completed application will be useful in responding to technical interview questions for future employment. This application may also be added to your portfolio to show to future employers.


# Scenario


You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.

You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.


# Requirements


A. Modify the “studentData Table” to include your personal information as the last item.  (I edited my name to upload to GitHub.)

B. Create a C++ project in your integrated development environment (IDE) with the following files:

 - degree.h

 - student.h and student.cpp

 - roster.h and roster.cpp

 - main.cpp  
 
C. Define an enumerated data type _DegreeProgram_ for the degree programs containing the data type values _SECURITY, NETWORK,_ and _SOFTWARE_.  

D. For the Student class, do the following:

1. Create the class Student in the files student.h and student.cpp, which includes _each_ of the following variables:

   - student ID

   - first name

   - last name

   - email address

   - age

   - array of number of days to complete each course

   - degree program

2. Create _each_ of the following functions in the Student class:

   - an accessor (i.e., getter) for each instance variable from part D1

   - a mutator (i.e., setter) for each instance variable from part D1

   - All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

   - constructor using _all_ of the input parameters provided in the table

   - print() to print specific student data  

E. Create a Roster class (roster.cpp) by doing the following:

1. Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

2. Create a student object for _each_ student in the data table and populate classRosterArray.

   - Parse _each_ set of data identified in the “studentData Table.”

   - Add _each_ student object to classRosterArray.

3. Define the following functions:

   - public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.

   - public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

   - public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through _all_ the students in classRosterArray and call the print() function for _each_ student.

   - public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

   - public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.

   - public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.  

F. Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:

1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.

2. Create an instance of the Roster class called classRoster.

3. Add _each_ student to classRoster.

4. Convert the following pseudo code to complete the rest of the main() function:

    classRoster.printAll();
    
    classRoster.printInvalidEmails();
    
    //loop through classRosterArray and for each element:
    
    classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");
    
    classRoster.printAll();
    
    classRoster.remove("A3");
    
    //expected: the above line should print a message saying such a student with this ID was not found.

5. Implement the destructor to release the memory that was allocated dynamically in Roster.  

G. Demonstrate professional communication in the content and presentation of your submission.
