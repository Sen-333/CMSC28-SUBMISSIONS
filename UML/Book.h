#include <iostream>

using namespace std;

class Book
{

    // private attributes
private:
    string Title;
    string Author;
    string ISBN;
    string Publisher;

    // public attributes
public:
    // Constructor
    Book(string title, string author, string isbn, string publisher)
    {
        Title = title;
        Author = author;
        ISBN = isbn;
        Publisher = publisher;
    }
    // Methods
    // Getters
    string getTitle() { return Title; }
    string getAuthor() { return Author; }
    string getISBN() { return ISBN; }
    string getPublisher() { return Publisher; }

    // Setters
    void setTitle(string bktitle) { Title = bktitle; }
    void setAuthor(string bkauthor) { Author = bkauthor; }
    void setISBN(string bkisbn) { ISBN = bkisbn; }
    void setPublisher(string bkpublisher) { Publisher = bkpublisher; }
};