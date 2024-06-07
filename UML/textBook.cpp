#include <iostream>
#include "Book.h"

using namespace std;

int main()
{   
    // Set data in book1
    Book book1("Don Quixote", "Miguel de Cervantes", "978-0393090185", "Francisco de Robles");

    // Print data
    cout << endl;
    cout << "Title:" << " " << book1.getTitle() << endl;
    cout << "Author:" << " " << book1.getAuthor() << endl;
    cout << "ISBN:" << " " << book1.getISBN() << endl;
    cout << "Publisher:" << " " << book1.getPublisher() << endl;

    // Set new data 
    book1.setTitle("The Lightning Thief");
    book1.setAuthor("Rick Riordan");
    book1.setISBN("0-7868-5629-7");
    book1.setPublisher("Miramax Books");

    // Print newly set data
    cout << endl;
    cout << "New Title:" << " " << book1.getTitle() << endl;
    cout << "New Author:" <<  " " << book1.getAuthor() << endl;
    cout << "New ISBN:" << " " << book1.getISBN() << endl;
    cout << "New Publisher:" << " " << book1.getPublisher() << endl;

}
