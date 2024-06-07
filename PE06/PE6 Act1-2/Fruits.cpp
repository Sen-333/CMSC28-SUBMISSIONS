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

    // function to Display Fruit Details
    void displayDetails() {
        cout << "Fruit Name: " << " " << fruitName << endl;
        cout << "Color: " << " " << color << endl;
        cout << "Maturity: " << " " << maturity << endl;
    }
};


// main function
int main() {
    // set data for Fruits
    Fruits fruits1 ("Mango", "Yellow", "Ripe");
    fruits1.displayDetails(); // call function to display data
    return 0;
}