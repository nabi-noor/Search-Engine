#include "Node.h"
#include "Movie.h"


//******************************************************************
// Constructors for Node class
Node::Node()
{
    next = NULL;
}


Node:: Node(Movie data)
{
    this->data = data;
    next = NULL;
}
//******************************************************************
//setters for Node class data members

void Node::setData(Movie data)
{
    this->data = data;
}

void Node::setNext(Node *next)
{
    this->next = next;
}

//*******************************************************************
//Getters for Node Class

Movie Node::getData()
{
    return data;
}

Node* Node::getNext()
{
    return next;
}
