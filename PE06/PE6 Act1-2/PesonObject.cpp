#include <iostream>
#include "Person.h" // add Person.h as a library to this program
#include "Grade.h"

using namespace std;

int main() {
    int age;
    char gender;
    string courseName;
    int studentGrade;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;

    Person p;
    cout << "\nInput age: ";
    cin >> age;
    p.setage(age);
    cout << "Input gender: ";
    cin >> gender;
    p.setgender(gender);

    Grade student;
    // Get course name
    cout << "Enter Course Name: ";
    cin >> courseName;
    // Get grade
    cout << "Enter grade: " << endl;
    cin >> studentGrade;

    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;

    cout << "Course Name= " << student.getCRSName() << endl;

    student.evaluateGrade(); 

     //Call view() after setting person data (if applicable)
    p.view();

    return 0;
}
