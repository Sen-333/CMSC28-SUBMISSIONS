#include <iostream>
#include <string>
#include "Employees.h"

using std::cin;
using std::cout;
using std::string;

int main() {
    // Declare variables to hold user input
    string fname;
    string lname;
    string email;
    string contact;
    string position;
    string office;
    string empNum;
    char gender;
    double salary;

    // Program Header
    cout << "--------------------------------------------------------------------------\n";
    cout << "Programming Exercise 08\n";
    cout << "Submitted by: Kyle Howard Senoy\n";
    cout << "--------------------------------------------------------------------------\n";
    cout << "This C++ program collects and displays Employee details using OOP.\n\n";

    // Get user input
    cout << "Input First name: ";
    cin >> fname;

    cout << "Input Last name: ";
    cin >> lname;

    cout << "Input Gender (M/F): ";
    cin >> gender;

    cout << "Input Email Address: ";
    cin >> email;

    cout << "Input Contact Number: ";
    cin >> contact;

    cout << "Input Employee Number: ";
    cin >> empNum;

    // Clear the input buffer before taking string input with spaces
    cout << "Input Position: ";
    cin.ignore(); // Ignore newline character in buffer
    getline(cin, position);

    cout << "Input Office Address: ";
    getline(cin, office);

    cout << "Input Salary: ";
    cin >> salary;

    // Create Employees object using the collected data
    Employees employee(fname, lname, gender, empNum);
    employee.setEmail(email);
    employee.setContactNumber(contact);
    employee.setPosition(position);
    employee.setOfficeUnit(office);
    employee.setSalary(salary);

    // Display the collected employee information
    cout << std::endl;
    cout << "Employee information: " << std::endl;
    cout << "Name: " << employee.getFirstName() << " " << employee.getLastName() << std::endl;
    cout << "Gender: " << employee.getGender() << std::endl;
    cout << "Email: " << employee.getEmail() << std::endl;
    cout << "Contact Number: " << employee.getContactNumber() << std::endl;
    cout << "Employee Number: " << employee.getEmpNum() << std::endl;
    cout << "Position: " << employee.getPosition() << std::endl;
    cout << "Office/Unit Address: " << employee.getOfficeUnit() << std::endl;
    cout << "Salary: PHP " << employee.getSalary() << " monthly" << std::endl;
    cout << std::endl;

    // Display a message using the collected data
    cout << "Hi, " << employee.getFirstName() << " " << employee.getLastName() << "! I am messaging you to offer a position of " 
         << employee.getPosition() << " with a salary of PHP " << employee.getSalary() << " monthly. You will be assigned to an office located at " 
         << employee.getOfficeUnit() << " with an assigned Employee Number " << employee.getEmpNum() << ". Thank you and I hope I hear from you soon!";

    return 0;
}
