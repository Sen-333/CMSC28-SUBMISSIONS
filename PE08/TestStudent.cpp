#include <iostream>
#include <string>
#include "Student.h"

using std::cin;
using std::cout;
using std::string;

int main() {
    // Declare variables to hold user input
    string fname;
    string lname;
    string email;
    string contact;
    string studentNum;
    string course;
    string department;
    string college;
    char gender;

    // Program Header
    cout << "---------------------------------------------------------------------------------\n";
    cout << "Programming Exercise 08\n";
    cout << "Submitted by: Kyle Howard Senoy\n";
    cout << "---------------------------------------------------------------------------------\n";
    cout << "This C++ program collects and displays Student details using OOP.\n\n";

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

    cout << "Input Student Number: ";
    cin >> studentNum;

    // Clear the input buffer before taking string input with spaces
    cout << "Input Course: ";
    cin.ignore(); // Ignore newline character in buffer
    std::getline(cin, course);

    cout << "Input Department: ";
    std::getline(cin, department);

    cout << "Input College: ";
    std::getline(cin, college);

    // Create Student object using the collected data
    Student student(fname, lname, gender, studentNum);
    student.setEmail(email);
    student.setContactNumber(contact);
    student.setCourse(course);
    student.setDepartment(department);
    student.setCollege(college);

    // Display the collected student information
    cout << std::endl;
    cout << "Student information: " << std::endl;
    cout << "Name: " << student.getFirstName() << " " << student.getLastName() << std::endl;
    cout << "Gender: " << student.getGender() << std::endl;
    cout << "Email: " << student.getEmail() << std::endl;
    cout << "Contact Number: " << student.getContactNumber() << std::endl;
    cout << "Student Number: " << student.getStudentNumber() << std::endl;
    cout << "Course: " << student.getCourse() << std::endl;
    cout << "Department: " << student.getDepartment() << std::endl;
    cout << "College: " << student.getCollege() << std::endl;
    cout << std::endl;

    // Display a welcome message using the collected data
    cout << "Hi, " << student.getFirstName() << " " << student.getLastName() << "! Welcome to UP Mindanao and Congratulations! "
         << "We are pleased to inform you that you are admitted to the " << student.getCourse() << " program under " 
         << student.getDepartment() << ", " << student.getCollege() << ". "
         << "Your student number is " << student.getStudentNumber() << "." << std::endl;

    return 0;
}
