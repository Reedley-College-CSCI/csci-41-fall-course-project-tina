#ifndef LISTING_H
#define LISTING_H
#include <string>
#include <iostream>
using namespace std;
class Listing{
private: 
    string address;
    int bedrooms;
    float rent;
    string info;
public:
    Listing();
    Listing(string address, int bedrooms, float rent, string info);
    //write getters and setters and print
    void display();
};





#endif