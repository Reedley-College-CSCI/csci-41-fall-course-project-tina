#ifndef LISTING_H
#define LISTING_H
#include <string>
#include <iostream>
using namespace std;
class Listing{
private: 
    string address;
    float bedrooms;
    float rent;
    string info;
public:
    Listing();
    Listing(string address, float bedrooms, float rent, string info);
    //write getters and setters and print
    void display();
    float getRent() const { return rent; }
};





#endif