#include "Hash.h"
#include "Movie.h"
Hash::Hash()
{
    for (int i = 0; i < 401; i++)
        hashTable[i] = new LinkedList();
}

int Hash::hash(int key)
{
    return key%401;
}

void Hash::add(Movie key)
{
    int i = hash(key.getRating());
    hashTable[i]->addToStart(key);
}

