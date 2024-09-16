#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    size = 0;
    capacity = 1;
    array = new Entry[capacity];
}