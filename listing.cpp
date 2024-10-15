#include "Listing.h"
using namespace std;

//    Listing(string address, int bedrooms, float rent, string info);

Listing::Listing(){
    address = "";
    bedrooms = 0;
    rent = 0;
    info = "";
}
Listing::Listing(string address, int bedrooms, float rent, string info) {
    this->address = address;
    this->bedrooms = bedrooms;
    this->info = info;
    this->rent = rent;
}
void Listing::display() {
    cout << address << endl;
    cout << rent << endl;
    cout << "Bedrooms: " << bedrooms << endl;
    cout << info;
}