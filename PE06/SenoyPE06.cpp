#include <iostream>
#include <list>
#include "Movie.h"
#include "Person.h"

using namespace std;

int main() {
    Movie movie;
    Person person;
    string input;

    int numofDirectors;
    int numofActors;

    cout << "This program will display a movie's details after requesting some information (user-input)." << endl;
    cout << "Programmed by: Kyle Howard Senoy" << endl;
    cout << endl;

    cout << "Enter Movie Title: ";
    getline(cin, input);
    movie.setTitle(input);

    cout << "Enter Synopsis: ";
    getline(cin, input);
    movie.setSynopsis(input);

    cout << "What is its MPAA Rating: ";
    getline(cin, input);
    movie.setRating(input);

    cout << "Enter Genre (Press Enter 2x to finish): ";
    while (true) {
        getline(cin, input);
        if (input.empty()) break;
        movie.setGenre(input);
    }

    cout << "Enter the number of Directors: ";
    cin >> numofDirectors;
    cin.ignore();

    for (int i = 0; i < numofDirectors; ++i) {
        Person director;

        cout << "Enter Director " << i + 1 << "'s First Name: " ;
        getline(cin, input);
        director.setFname(input);

        cout << "Enter Director " << i + 1 << "'s Last Name: " ;
        getline(cin, input);
        director.setLname(input);

        cout << "Enter Director " << i + 1 << "'s Gender: " ;
        getline(cin, input);
        director.setGender(input);

        movie.setDirector(director);
    }

   cout << "Enter the number of Actors: ";
    cin >> numofActors;
    cin.ignore(); // Clear the input buffer

    for (int i = 0; i < numofActors; ++i) {
        Person actor;

        cout << "Enter Actor " << i + 1 << "'s First Name: " ;
        getline(cin, input);
        actor.setFname(input);

        cout << "Enter Actor " << i + 1 << "'s Last Name: " ;
        getline(cin, input);
        actor.setLname(input);

        cout << "Enter Actor " << i + 1 << "'s Gender: " ;
        getline(cin, input);
        actor.setGender(input);

        movie.setActor(actor);
    }
    cout << endl << "||---- MOVIE DETAILS ----||" << endl;
    cout << "Movie Title: " << movie.getTitle() << endl;
    cout << "Synopsis: " << movie.getSynopsis() << endl;
    cout << "MPAA Rating: " << movie.getRating() << endl;

    cout << "Genres: ";
    for (const auto& genre : movie.getGenres()) {
        cout << genre << " ";
    }
    cout << endl;

    cout << "Directors: " << endl;
    for (const auto& director : movie.getDirectors()) {
        cout << director.getFname() << " " << director.getLname() << " (" << director.getGender() << ")" << endl;
    }

    cout << "Actors: " << endl;
    for (const auto& actor : movie.getActors()) {
        cout << actor.getFname() << " " << actor.getLname() << " (" << actor.getGender() << ")" << endl;
    }

    return 0;
};
