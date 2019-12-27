#ifndef NODE_H
#define NODE_H
#include "Movie.h"


// Node class declaration
class Node
{
public:
    // Constructor
    Node();
    Node(Movie data);

    // setters
    void setData(Movie data);
    void setNext(Node* next);

    // getters
    Movie getData();
    Node* getNext();
private:
    // data members
    Movie data;
    Node *next;
};

#endif // NODE_H
