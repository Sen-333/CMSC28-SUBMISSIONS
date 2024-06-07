#include <iostream>

using namespace std;
class Grade {

    private:
        string crsName;
        int grade;

    public:
        Grade () {}

    string getCRSName() {return crsName; }
    int getGrade() { return grade; }

    void setCRSName(string CrsName) { crsName = CrsName;}
    void setGrade(int GRADE) {grade = GRADE;}

    void evaluateGrade() {
        if (grade >= 60) {
            cout << "Passed" << " " << crsName << endl;
        } else {
            cout << "Failed" << " " << crsName << endl;
        }
    }
};