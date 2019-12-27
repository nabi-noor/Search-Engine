#ifndef HASH_H
#define HASH_H
#include "Movie.h"
#include "LinkedList.h"
#include "Node.h"
class Hash
{
private:
    LinkedList *hashTable[101];
    public:
        Hash();
        void add(Movie key);
        int hash(int key);
        int search(int key);
        void print(int i);
        Node searchMin(int rating);
        Node searchMax(int rating);
        int getSize(int key);
};

#endif // HASH_H
