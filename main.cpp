#include <iostream>
#include "Listing.h"
#include <fstream>
#include <string>
#include "listing.cpp"
using namespace std;
int main() {
/*Listing L = Listing("123 A St", 3, 1000, "details");
L.display();
*/
int numlistings = 30;
Listing listings[numlistings];
int count = 0;
    //check to see if file is opening correctly
    ifstream file("listings.txt");
    if (!file.is_open()) {
     cout << "could not open file" << endl;
    return 1;
    }

string address, rentline, info, bedroomline;
float rent, bedrooms;

while (getline(file, address)) {
    getline(file, rentline);
    rent = stof(rentline);
    getline(file, bedroomline);
    bedrooms = stof(bedroomline.substr(0, bedroomline.find(' ')));
    getline(file, info);
//array for the file to be read into
listings[count] = Listing(address, bedrooms, rent, info);
count++;
    getline(file, rentline);
}

file.close();

//displays the listings
cout << "Rental listings in Fresno, CA:" << endl << " " << endl;
for (int i = 0; i < count; i++) {
    listings[i].display();
    cout << endl;
}

return 0;
}
