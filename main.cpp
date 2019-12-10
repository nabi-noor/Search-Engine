#include <iostream>
#include <fstream>
#include <string>
#include "Movie.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string id,votes,rating;
    ifstream read;
    int votesToInt;
    float ratingToFloat;
    read.open("data.txt");

    while(!read.eof())
    {
        read >> id >> rating >> votes;
        stringstream(rating)>>ratingToFloat;
        stringstream(votes)>>votesToInt;
        cout << id << '\t' << ratingToFloat << '\t' << votesToInt << endl;
    }
    read.close();
    return 0;
}
