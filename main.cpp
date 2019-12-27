#include <iostream>
#include <fstream>
#include <string>
#include "Movie.h"
#include "Hash.h"
#include <bits/stdc++.h>
using namespace std;

void printMenu()
{
    cout<<"Please enter your choice from given questions"<<endl
        <<"1.	Which movie has highest rating?"<<endl
        <<"2.	Which movie has lowest rating?"<<endl
        <<"3.	How many movies have same rating?(enter the rating you want to search)"<<endl
        <<"4.	How many movies have average rating?"<<endl
        <<"5.	Which average rated movie has highest votes?"<<endl
        <<"6.	Which average rated movie has lowest votes?"<<endl
        <<"Enter 0 to exit"<<endl;
}

int main()
{
    string id,votes,rating;
    ifstream read;
    int count = 0, votesToInt; 
    float maxRating = 0, minRating = 100000, sumOfRating = 0;
    int maxVotes = 0, minVotes = 100000, sumOfVotes = 0; 
    float ratingToFloat;
    read.open("data.txt");
    Hash table;
    if(read.is_open())
    {
        while(!read.eof())
        {
            read >> id >> rating >> votes;
            stringstream(rating)>>ratingToFloat;
            stringstream(votes)>>votesToInt;
            Movie obj(id,ratingToFloat,votesToInt);
            table.add(obj);
            count++;
            sumOfRating += ratingToFloat;
            sumOfVotes += votesToInt;
            if(maxVotes < votesToInt)
                maxVotes = votesToInt;
            if(minVotes > votesToInt)
                minVotes = votesToInt;
            if(maxRating < ratingToFloat)
                maxRating = ratingToFloat;
            if(minRating > ratingToFloat)
                minRating = ratingToFloat; 
        }
        read.close();

    }
    else
        cout << "The file is not open" <<endl;
        
    cout<<"Total Number of Entries: " <<count << endl 
        <<"Average Rating: " <<float(sumOfRating/count)<< endl
        <<"Average Votes: "<< float(sumOfVotes/count)<<endl
        <<"Highest Rating: "<< maxRating<<endl
        <<"Lowest Rating: "<<minRating<<endl
        <<"Highest Number of votes: "<<maxVotes<<endl
        <<"Lowest Number of Votes: "<<minVotes<<endl;
    int choice;
    do
    {
        printMenu();
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << table.searchMax(maxRating*10).getData();
                break;
            case 2:
                cout << table.searchMin(minRating*10).getData();
                break;
            case 3:
                cout << "Enter the rating where you want to check the movie count"<<endl;
                cin >> ratingToFloat;
                if(table.getSize((ratingToFloat) == 0))
                    cout << "There are no movies with this rating" <<endl;
                else
                    cout << "Number of movies: "<<table.getSize(ratingToFloat*10)<<endl;
                break;
           case 4:
                if(table.getSize((sumOfRating/count)*10) == 0)
                    cout << "There are no movies with this rating"<<endl;
                else 
                    cout << table.getSize((sumOfRating/count)*10)<<endl;
                break;
            case 5:
                if(table.searchMax((sumOfRating/count)*10).getData().getRating() == 0)
                    cout << "there are no movies with this rating"<<endl;
                else
                    cout << table.searchMax((sumOfRating/count)*10).getData();
                break;
            case 6:
                if(table.searchMin((sumOfRating/count)*10).getData().getRating() == 0)
                    cout << "there are no movies with this rating"<<endl;
                else
                    cout << table.searchMin((sumOfRating/count)*10).getData();
                break;
            default:
                cout << "Please enter a valid choice";
        }        
    } while (choice != 0);
    
    return 0;
}
