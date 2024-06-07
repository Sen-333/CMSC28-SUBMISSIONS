#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "Person.h"
#include <string>

using std::string;

// The Employees class inherits from the Person class
class Employees : public Person {
private:
    // Private attributes specific to Employees
    string empNum;        // Employee Number
    string Position;      // Position of the employee
    string OfficeUnit;    // Office/Unit where the employee works
    double Salary;        // Salary of the employee

public:
    // Constructor to initialize the Employees object with given parameters
    Employees(string fname, string lname, char gender, string empNum)
        : Person(fname, lname, gender), empNum(empNum) {}

    // Methods to set attributes
    // Sets the position of the employee
    void setPosition(string position) {
        Position = position;
    }

    // Sets the office/unit of the employee
    void setOfficeUnit(string officeUnit) {
        OfficeUnit = officeUnit;
    }

    // Sets the salary of the employee
    void setSalary(double salary) {
        Salary = salary;
    }

    // Sets the employee number (empNum)
    void setEmpNum(string empNum) {
        this->empNum = empNum;
    }

    // Methods to get attributes
    // Gets the position of the employee
    string getPosition() const {
        return Position;
    }

    // Gets the office/unit of the employee
    string getOfficeUnit() const {
        return OfficeUnit;
    }

    // Gets the salary of the employee
    double getSalary() const {
        return Salary;
    }

    // Gets the employee number
    string getEmpNum() const {
        return empNum;
    }
};

#endif
