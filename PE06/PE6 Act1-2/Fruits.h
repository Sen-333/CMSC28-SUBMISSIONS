#include <iostream>

using namespace std;

class Fruits {

    // private attributes
    private:
    string fruitName;
    string color;
    string maturity;

    // public attributes
    public:

    // constructor
    Fruits(string FruitName, string Color, string Maturity){
        fruitName = FruitName;
        color = Color;
        maturity = Maturity;
    }

    // function to display fruit details
    void displayDetails() {
        cout << "Fruit Name: " << " " << fruitName << endl;
        cout << "Color: " << " " << color << endl;
        cout << "Maturity: " << " " << maturity << endl;
    }
};