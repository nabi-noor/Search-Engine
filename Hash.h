#ifndef HASH_H
#define HASH_H
#include "Movie.h"
#include "LinkedList.h"
class Hash
{
private:
    LinkedList *hashTable[401];
    public:
        Hash();
        void add(Movie key);
        int hash(int key);
        int search(int key);
        void print();
};

#endif // HASH_H
