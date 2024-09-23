#include "Entry.h"

//default constructor
Entry::Entry(){
    name = "";
    age = 0;
}
//updated constructor with parameters
Entry::Entry(string address, double price, int bedrooms, string descriptionc) {

}
//print the entry
void Entry::print() {
    std::cout << name << " " << age << std::endl;
}
