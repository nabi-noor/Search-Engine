#ifndef HASH_H
#define HASH_H
#include "Movie.h"

class Hash
{
private:
    Movie ratingTable[39];
    int filledTableSize;
    public:
        Hash();
        void add();

};

#endif // HASH_H
