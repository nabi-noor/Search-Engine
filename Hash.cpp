#include "Hash.h"
#include "Movie.h"
//************************************************************************
//comstructor for Hash class
Hash::Hash()
{
    for (int i = 0; i < 101; i++)
        hashTable[i] = new LinkedList();
}

//*************************************************************************
// Hash function definition

int Hash::hash(int key)
{   
    return key%101;
}


//*************************************************************************
//Function to add an object in hash table

void Hash::add(Movie key)
{
    int i = hash((key.getRating())*10);
    hashTable[i]->addToStart(key);
}


//**************************************************************************
// Print hash table
void Hash::print(int i)
{       i = hash(i);
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

Node Hash::searchMax(int rating)
{
    int max = 0;
    Node maxNode;
    int i = hash(rating);
    if(hashTable[i]->getHead() != NULL)
    {
        Node* temp = hashTable[i]->getHead();
        while(temp != NULL)
        {
            if(temp->getData().getVotes() > max)
            {
                max = temp->getData().getVotes();
                maxNode = *temp;
            }
            temp = temp->getNext();
        }
        return maxNode;
    }
}

Node Hash::searchMin(int rating)
{
    int min = 100000;
    Node minNode;
    int i = hash(rating);
    if(hashTable[i]->getHead() != NULL)
    {
        Node* temp = hashTable[i]->getHead();
        while(temp != NULL)
        {
            if(temp->getData().getVotes() < min)
            {
                min = temp->getData().getVotes();
                minNode = *temp;
            }
            temp = temp->getNext();
        }
        return minNode;
    }
}
int Hash::getSize(int key)
{
    return hashTable[hash(key)]->getSize();
}

