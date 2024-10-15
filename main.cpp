#include <iostream>
#include "Listing.h"
#include <fstream>
#include <string>
using namespace std;
int main() {
Listing L = Listing("123 A St", 3, 1000, "details");
L.display();

       /** ifstream file("listings.txt");
    if (!file.is_open())
     cout << "could not open file" << endl;
    return 1;

string line;
while (getline(file, line)) {
    cout << line << endl;
}
    DynamicArray darr = DynamicArray();

}
*/
}