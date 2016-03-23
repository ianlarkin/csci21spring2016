/*
 * Name        : lab_12.cpp
 * Author      : Ian Larkin
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

// CODE HERE -- FUNCTION DEFINITIONS

int* MakeDynoIntArray(unsigned int size) {
    return (new int[size]);
}


int Sum(int* the_array, unsigned int array_size) {
    if (the_array == NULL) {
        throw "NULL ARRAY REFERENCE";
    } else {
		int total = 0;
		for (unsigned int i=0; i < array_size; i++) {
			total = total + the_array[i];
		}
		return total;
    }
}

int Max(int* the_array, unsigned int array_size) {
    if (the_array == NULL) {
        throw "NULL ARRAY REFERENCE";
    } else {
		int largest = the_array[0];
		for (unsigned int i = 0; i < array_size; i++) {
			if (the_array[i] > largest) {
				largest = the_array[i];
			}
		}
    	return largest;
    }
    
}

int Min(int* the_array, unsigned int array_size) {
    if (the_array == NULL) {
        throw "NULL ARRAY REFERENCE";
    } else {
		int smallest = the_array[0];
		for (unsigned int i = 0; i < array_size; i++) {
			if (the_array[i] < smallest) {
				smallest = the_array[i];
			}
		}
		return smallest;
    }
    
}