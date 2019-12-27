#include "LinkedList.h"
#include "Movie.h"
#include "Node.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
LinkedList::LinkedList()
{
    head = NULL;
}

void LinkedList::addToStart(Movie data)
{
    Node *temp2 = head;
    Node *temp = new Node(data);
    head = temp;
    head -> setNext(temp2);
    temp2 = head;
}
void LinkedList::printList()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->getData()<<"->";
        temp = temp->getNext();
    }
    cout << endl;
}

void LinkedList::addToEnd(Movie data)
{
    if (head == NULL)
    {
        addToStart(data);
    }
    else
    {
        Node *temp2 = head;
        Node *temp = new Node(data);
        while (temp2 -> getNext() != NULL)
        {
            temp2 = temp2->getNext();
        }
        temp2 -> setNext(temp);
    }
}

void LinkedList::deleteFromStart()
{
    head = head->getNext();
}

void LinkedList::deleteFromEnd()
{
    Node *temp = head;
    while(temp->getNext()->getNext()!=NULL)
    {
        temp=temp->getNext();
    }
    temp->setNext(NULL);
}


Movie LinkedList::searchMovie(int rating)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->getData().getRating() == rating)
            return temp->getData();
        temp = temp->getNext();
    }
}

Node* LinkedList::getHead()
{
    return head;
}

int LinkedList::getSize()
{
    Node *temp = head;
    int size = 0;
    while (temp!=NULL)
    {
        size++;
        temp = temp->getNext();
    }
    return size;
}