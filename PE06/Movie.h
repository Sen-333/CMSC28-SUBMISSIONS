#ifndef Movie_h
#define Movie_h

#include <string>
#include <vector>
#include "Person.h"

class Movie {
private:
    std::string title;
    std::string synopsis;
    std::string mpaa_rating;
    std::vector<std::string> genres;
    std::vector<Person> directors;
    std::vector<Person> actors;

public:
    std::string getTitle() const { return title; }
    std::string getSynopsis() const { return synopsis; }
    std::string getRating() const { return mpaa_rating; }
    std::vector<std::string> getGenres() const { return genres; }
    std::vector<Person> getDirectors() const { return directors; }
    std::vector<Person> getActors() const { return actors; }

    void setTitle(const std::string& Title) { title = Title; }
    void setSynopsis(const std::string& Synopsis) { synopsis = Synopsis; }
    void setRating(const std::string& Rating) { mpaa_rating = Rating; }
    void setGenre(const std::string& Genre) { genres.push_back(Genre); }
    void setDirector(const Person& Director) { directors.push_back(Director); }
    void setActor(const Person& Actor) { actors.push_back(Actor); }
};

#endif
