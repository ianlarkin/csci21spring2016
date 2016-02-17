/*
 * Name        : lab_6.cpp
 * Author      : Ian Larkin
 * Description : Working with Arrays
 */

#include "lab_6.h"


string PrepareForDisplay(int values[], int size, char separator) {
    stringstream ss;
    for (int i = 0; i < size; i++) {
        ss << values[i];
        if (i < (size - 1)) {
            ss << separator;
        }
    }
    string stringArray = ss.str();
    return stringArray;
}

bool HasValue(int values[], int size, int value) {
    bool valueThere = false;
    for (int i = 0; i < size; i++) {
        if (values[i] == value) {
            valueThere = true;
        }
    }
    return valueThere;
}
            

int ValueAt(int values[], int size, int index, bool &error) {
    if (index < size) {
        error = false;
        return values[index];
        
    } else {
        error = true;
        return 0;
    }
}

int Sum(int values[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = total + values[i];
    }
    return total;
}

bool SwapValues(int values[], int size, int index1, int index2) {
    bool swapDone = false;
    if (index1 > -1 && index2 > -1) {
        if (index1 < size && index2 < size) {
            int tempSwap;
            tempSwap = values[index1];
            values[index1] = values[index2];
            values[index2] = tempSwap;
            swapDone = true;
        }
    }
    return swapDone;
}