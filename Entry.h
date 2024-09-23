#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <iostream>
using namespace std;

class Entry{
private: 
    string address;
    double price;
    int bedrooms;
    int bathrooms;
    string description;
public:
    Entry();
    Entry(string address, double price, int bedrooms, int bathrooms, string description);
    //updated getters
    string getAddress() const;
    double getPrice() const;
    int getBedrooms() const;
    int getBathrooms() const;
    string getDescription() const;
//updated setters
    void setAddress(const string& address);
    void setPrice(double price);
    void setBedrooms(int bedrooms);
    void setBathrooms(int bathrooms);
    void setDescription(const string& description);
    //override stream operators
    void print() const;
};





#endif
