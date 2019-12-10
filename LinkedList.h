#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Movie.h"
#include "Node.h"

class LinkedList
{
public:
    LinkedList();
    void addToStart(Movie data);
    void printList();
    void addToEnd(Movie data);
    void deleteFromStart();
    void deleteFromEnd();
    Movie searchMovie(int rating);
private:
    Node *head;
};

#endif // LINKEDLIST_H
