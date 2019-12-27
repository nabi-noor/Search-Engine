#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
#include <fstream>

// class declaration
using namespace std;
class Movie
{
private:
    string movieId;   // data members
    int votes;
    float rating;
public:
    Movie(); // constructor declaration
    Movie(string movieId, float rating, int votes);

    void setMovieId(string movieId); // setters declaration
    void setRating(int rating);
    void setVotes(int votes);

    string getMovieId(); // getters declaration
    float getRating();
    int getVotes();

    bool operator == (Movie x);  // == operator overloading declaration
    friend ostream& operator<<(std::ostream& os, const Movie& movie);
};

#endif // MOVIE_H
