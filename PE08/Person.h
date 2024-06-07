#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

// The Person class represents a generic person with common attributes
class Person {
private:
    // Private attributes for encapsulation
    string fname;      // First name of the person
    string lname;      // Last name of the person
    char gender;       // Gender of the person ('M' or 'F')
    string emailAdd;   // Email address of the person
    string cpNumber;   // Contact number of the person

public:
    // Constructor to initialize a Person object with given first name, last name, and gender
    Person(string fname, string lname, char gender)
        : fname(fname), lname(lname), gender(gender) {}

    // Method to set the email address of the person
    void setEmail(string email) {
        emailAdd = email;
    }

    // Method to set the contact number of the person
    void setContactNumber(string number) {
        cpNumber = number;
    }

    // Method to get the email address of the person
    string getEmail() const {
        return emailAdd;
    }

    // Method to get the contact number of the person
    string getContactNumber() const {
        return cpNumber;
    }

    // Method to get the first name of the person
    string getFirstName() const {
        return fname;
    }

    // Method to get the last name of the person
    string getLastName() const {
        return lname;
    }

    // Method to get the gender of the person
    char getGender() const {
        return gender;
    }
};

#endif 
