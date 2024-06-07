#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

using std::string;

// The Student class inherits from the Person class
class Student : public Person {
private:
    // Private attributes specific to Student
    string studentNum;    // Student Number
    string Course;        // Course the student is enrolled in
    string Department;    // Department of the student's course
    string College;       // College of the student's course

public:
    // Constructor to initialize the Student object with given parameters
    Student(string fname, string lname, char gender, string studentNum)
        : Person(fname, lname, gender), studentNum(studentNum) {}

    // Methods to set attributes
    // Sets the course of the student
    void setCourse(string course) {
        Course = course;
    }

    // Sets the department of the student's course
    void setDepartment(string department) {
        Department = department;
    }

    // Sets the college of the student's course
    void setCollege(string college) {
        College = college;
    }

    // Methods to get attributes
    // Gets the course of the student
    string getCourse() const {
        return Course;
    }

    // Gets the department of the student's course
    string getDepartment() const {
        return Department;
    }

    // Gets the college of the student's course
    string getCollege() const {
        return College;
    }

    // Gets the student number
    string getStudentNumber() const {
        return studentNum;
    }
};

#endif
