#include "Movie.h"
#include <string>
using namespace std;
//**************************************************************************
// default constructor
Movie::Movie()
{
    movieId = '\0';
    rating = 0;
    votes = 0;
}

//*****************************************************************************
// Parametrized Constructor

Movie:: Movie(string movieId, int rating, int votes)
{
    this->movieId = movieId;
    this->rating = rating;
    this->votes = votes;
}

//*******************************************************************************
// Setters

void Movie::setMovieId(string movieId)
{
    this->movieId = movieId;
}

void Movie::setRating(int rating)
{
    this->rating = rating;
}

void Movie::setVotes(int votes)
{
    this->votes = votes;
}

//***************************************************************************************
// Setters

string Movie::getMovieId()
{
    return movieId;
}

int Movie::getRating()
{
    return rating;
}

int Movie::getVotes()
{
    return votes;
}
//*****************************************************************************************
// == operator overloaded to perform comparision operations

bool Movie::operator==(Movie x)
{
    if(this->movieId == x.movieId && this->rating == x.rating && this->votes == x.votes)
        return true;
    return false;
}