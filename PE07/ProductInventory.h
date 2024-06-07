#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H

#include <string>
#include <iostream>

using std::cout;
using std::string;

// Base class for all products in the inventory
class Product
{
private:
    string name;
    string brand;
    double price;
    int quantity;
    string description;
    string category;

public:
    // Constructors
    Product();
    Product(const string &name, const string &brand, double price, int quantity, const string &description, const string &category);

    // Getters for all attributes
    string getName() const;
    string getBrand() const;
    double getPrice() const;
    int getQuantity() const;
    string getDescription() const;
    string getCategory() const;

    // Setters for all attributes
    void setName(const string &name);
    void setBrand(const string &brand);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setDescription(const string &description);
    void setCategory(const string &category);

    // Virtual function to display product details
    virtual void displayDetails() const;
};

// Constructor implementations
Product::Product() : name(""), brand(""), price(0.0), quantity(0), description(""), category("") {}

Product::Product(const string &name, const string &brand, double price, int quantity, const string &description, const string &category)
    : name(name), brand(brand), price(price), quantity(quantity), description(description), category(category) {}

// Getter implementations
string Product::getName() const { return name; }
string Product::getBrand() const { return brand; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }
string Product::getDescription() const { return description; }
string Product::getCategory() const { return category; }

// Setter implementations
void Product::setName(const string &name) { this->name = name; }
void Product::setBrand(const string &brand) { this->brand = brand; }
void Product::setPrice(double price) { this->price = price; }
void Product::setQuantity(int quantity) { this->quantity = quantity; }
void Product::setDescription(const string &description) { this->description = description; }
void Product::setCategory(const string &category) { this->category = category; }

// Display product details
void Product::displayDetails() const
{
    cout << "Product Name: " << name << std::endl;
    cout << "Brand: " << brand << std::endl;
    cout << "Price: PHP " << price << std::endl;
    cout << "Quantity: " << quantity << " unit/s" << std::endl;
    cout << "Description: " << description << std::endl;
    cout << "Category: " << category << std::endl;
}

// Derived class for clothing items
class Clothing : public Product
{
private:
    string size;
    string color;
    string material;

public:
    // Constructors
    Clothing();
    Clothing(const string &name, const string &brand, double price, int quantity, const string &description, const string &category, const string &size, const string &color, const string &material);

    // Setters
    void setSize(const string &size);
    void setColor(const string &color);
    void setMaterial(const string &material);

    // Getters
    string getSize() const;
    string getColor() const;
    string getMaterial() const;

    // Override displayDetails
    void displayDetails() const override;
};

// Constructor
Clothing::Clothing() : Product(), size(""), color(""), material("") {}

Clothing::Clothing(const string &name, const string &brand, double price, int quantity, const string &description, const string &category, const string &size, const string &color, const string &material)
    : Product(name, brand, price, quantity, description, category), size(size), color(color), material(material) {}

// Setter
void Clothing::setSize(const string &size) { this->size = size; }
void Clothing::setColor(const string &color) { this->color = color; }
void Clothing::setMaterial(const string &material) { this->material = material; }

// Getter
string Clothing::getSize() const { return size; }
string Clothing::getColor() const { return color; }
string Clothing::getMaterial() const { return material; }

// Display clothing details
void Clothing::displayDetails() const
{
    Product::displayDetails();
    cout << "Size: " << size << std::endl;
    cout << "Color: " << color << std::endl;
    cout << "Material: " << material << std::endl;
}

// Derived class for electronic items
class Electronics : public Product
{
private:
    string model;
    int warranty;
    string technicalSpecifications;

public:
    // Constructors
    Electronics();
    Electronics(const string &name, const string &brand, double price, int quantity, const string &description, const string &category, const string &model, int warranty, const string &technicalSpecifications);

    // Setters
    void setModel(const string &model);
    void setWarranty(int warranty);
    void setTechnicalSpecifications(const string &technicalSpecifications);

    // Getters
    string getModel() const;
    int getWarranty() const;
    string getTechnicalSpecifications() const;

    // Override displayDetails
    void displayDetails() const override;
};

// Constructor
Electronics::Electronics() : Product(), model(""), warranty(0), technicalSpecifications("") {}

Electronics::Electronics(const string &name, const string &brand, double price, int quantity, const string &description, const string &category, const string &model, int warranty, const string &technicalSpecifications)
    : Product(name, brand, price, quantity, description, category), model(model), warranty(warranty), technicalSpecifications(technicalSpecifications) {}

// Setter
void Electronics::setModel(const string &model) { this->model = model; }
void Electronics::setWarranty(int warranty) { this->warranty = warranty; }
void Electronics::setTechnicalSpecifications(const string &technicalSpecifications) { this->technicalSpecifications = technicalSpecifications; }

// Getter
string Electronics::getModel() const { return model; }
int Electronics::getWarranty() const { return warranty; }
string Electronics::getTechnicalSpecifications() const { return technicalSpecifications; }

// Display electronics details
void Electronics::displayDetails() const
{
    Product::displayDetails();
    cout << "Model: " << model << std::endl;
    cout << "Warranty: " << warranty << " months" << std::endl;
    cout << "Technical Specifications: " << technicalSpecifications << std::endl;
}

#endif
