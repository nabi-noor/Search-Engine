#include "LinkedList.h"
#include "Movie.h"
#include "Node.h"
#include <iostream>
#include <string>
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
        cout << temp->getData()<< endl;
        temp = temp->getNext();
    }
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
