#ifndef DYNAMICARRAY_H
#define DYNAMICARRY_H
#include "Entry.h"
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int size;
    int capacity;
    Entry* array = NULL;
public:
    DynamicArray();
    //other contructors and functions go here
}
#endif