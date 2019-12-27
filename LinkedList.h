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
    Node* getHead();
    Movie searchMovie(int rating);
    int getSize();
private:
    Node *head;
};

#endif // LINKEDLIST_H
