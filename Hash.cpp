#include "Hash.h"
#include "Movie.h"
//************************************************************************
//comstructor for Hash class
Hash::Hash()
{
    for (int i = 0; i < 401; i++)
        hashTable[i] = new LinkedList();
}

//*************************************************************************
// Hash function definition

int Hash::hash(int key)
{
    return key%401;
}


//*************************************************************************
//Function to add an object in hash table

void Hash::add(Movie key)
{
    int i = hash(key.getRating());
    //cout << i <<endl;
    hashTable[i]->addToStart(key);
}


//**************************************************************************
// Print hash table
void Hash::print()
{
    for (int i = 0; i < 401 ; i++)
    {
        if(hashTable[i]->getHead() == NULL)
        {
            cout<< i << '\t' <<'X'<< endl;
        }

        else
        {
            cout << i << '\t';
            hashTable[i]->printList();
        }

    }
}

