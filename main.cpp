#include <iostream>
#include <fstream>
#include <string>
#include "Movie.h"
#include "Hash.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string id,votes,rating;
    ifstream read;
    int votesToInt;
    float ratingToFloat;
    read.open("data.txt");
    Hash table;
    while(!read.eof())
    {
        read >> id >> rating >> votes;
        stringstream(rating)>>ratingToFloat;
        stringstream(votes)>>votesToInt;
        Movie obj(id,(ratingToFloat*10),votesToInt);
        table.add(obj);
    }
    read.close();
    table.print();
    return 0;
}
