#ifndef Person_h
#define Person_h
#include <vector>
#include <string>

using namespace std;

class Person {
    private:
    string firstname;
    string lastname;
    string Gender;

    public:
    // getters
    string getFname() const {return firstname; }
    string getLname() const {return lastname; }
    string getGender() const {return Gender; }

    // setters
    void setFname(const string& fname) {firstname = fname; }
    void setLname(const string& lname) {lastname = lname; }
    void setGender(const string& gender) {Gender = gender; }
 
};

#endif