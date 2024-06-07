#include <iostream>
#include "ProductInventory.h"

using std::cin;
using std::cout;

int main()
{
    // Variables to hold user input
    string name;
    string brand;
    string description;
    string category;
    string size;
    string color;
    string material;
    string model;
    string technicalSpecifications;
    double price;
    int quantity;
    int warranty;

    // Program Header
    cout << "----------------------------------------------------------------------------------------------" << std::endl;
    cout << "Programming Exercise 07" << std::endl;
    cout << "Submitted by: Kyle Howard Senoy" << std::endl;
    cout << "----------------------------------------------------------------------------------------------" << std::endl;
    cout << "This C++ program manages a store's inventory, demonstrating inheritance and encapsulation." << std::endl;
    cout << std::endl;

    // User input for Clothing item
    cout << "-- Enter details for Clothing Item --" << std::endl;
    cout << "Name: ";
    cin.ignore();
    std::getline(cin, name);
    cout << "Brand: ";
    std::getline(cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cout << "Description: ";
    cin.ignore();
    std::getline(cin, description);
    cout << "Category: ";
    std::getline(cin, category);
    cout << "Size: ";
    std::getline(cin, size);
    cout << "Color: ";
    std::getline(cin, color);
    cout << "Material: ";
    std::getline(cin, material);
    cout << std::endl;

    // User input for Electronics item
    cout << "-- Enter details for Electronic Item --" << std::endl;
    cout << "Name: ";
    std::getline(cin, name);
    cout << "Brand: ";
    std::getline(cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cout << "Description: ";
    cin.ignore();
    std::getline(cin, description);
    cout << "Category: ";
    std::getline(cin, category);
    cout << "Model: ";
    std::getline(cin, model);
    cout << "Warranty (in months): ";
    cin >> warranty;
    cin.ignore();
    cout << "Technical Specifications: ";
    std::getline(cin, technicalSpecifications);

    // Create and display Clothing item
    Clothing clothingItem(name, brand, price, quantity, description, category, size, color, material);
    cout << std::endl
         << "Clothing Item Details:" << std::endl;
    clothingItem.displayDetails();
    cout << std::endl;

    // Create and display Electronics item
    Electronics electronicItem(name, brand, price, quantity, description, category, model, warranty, technicalSpecifications);
    cout << std::endl
         << "Electronics Item Details:" << std::endl;
    electronicItem.displayDetails();
    cout << std::endl;

    return 0;
}
