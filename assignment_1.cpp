/*
 * Name        : Assignment 1
 * Author      : Ian Larkin
 * Description : Assignment 1 - Various functions to show knowledge of string manipulation and array functions
 * Sources     : wikipedia, cplusplus.com
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
/*Function 1
Function Name: CheckAlphabetic
Function Parameters: string (by const reference)
Function Return: bool
Function Description: This function will check to make sure all characters in a given string are alphabetic. It returns true if the string is all alphabetic, otherwise it returns false. The empty string should also return false.
*/
bool CheckAlphabetic(string const &str) {
    
    bool checkAlpha = true;
    if (str == "") {
        checkAlpha = false;
    } else {
        for (unsigned int i = 0; i < str.length(); i++) {
            if (toupper(str[i]) < 65 || toupper(str[i]) > 90) {
                checkAlpha = false;
            }
        }
    }
    return checkAlpha;
}

/*
Function 2
Function Name: CountWords
Function Parameters: string
Function Return: int
Function Description: This function will count the number of words (delimited by space characters) in a string. Assume the parameter will never have multiple spaces back-to-back and will never begin or end with spaces).
*/
int CountWords(string str) {
    int wordCount = 0;
    if (str != "") {
        wordCount = 1;
        for(unsigned int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
            wordCount++;
            }
        }
    }
    return wordCount;
}

/*
Function 3
Function Name: EncryptString
Function Parameters: string (by reference), int (Number of characters to shift by)
Function Return: bool
Function Description: This function will perform a Caesar Cipher Shift (http://en.wikipedia.org/wiki/Caesar_cipher). If the string contains any
non-alpha characters do not perform the encryption and return false.
Otherwise perform the encryption and return true.
*/
bool EncryptString(string &str, int shiftAmt) {
    bool encryption = true;
    if(CheckAlphabetic(str) == false) {
        encryption = false;
    }
        for (unsigned int i = 0; i < str.length(); i++) {
            int asciishift = 65;
            if (islower(str[i])) {
                asciishift = 97;
            }
            int encyptedCh = (((int)str[i] - asciishift + shiftAmt) % 26) + asciishift;
            str[i] = (char)encyptedCh;
        }
        
        
    return encryption;
}
/*
Function 4
Function Name: DecryptSTring
Function Parameters: string (by reference), int (Number of characters to shift by)
Function Return: bool
Function Description: This function decrypts a Caesar Cipher shift. If the string contains any
non-alpha characters do not perform the encryption and return false.
Otherwise perform the encryption and return true.
*/
bool DecryptString(string &str, int shiftAmt) {
    bool decryption = true;
    if(CheckAlphabetic(str) == false) {
        decryption = false;
    }
        for (unsigned int i = 0; i < str.length(); i++) {
            int asciishift = 65;
            if (islower(str[i])) {
                asciishift = 97;
            }
            int decyptedCh = (((int)str[i] - asciishift - shiftAmt) % 26) + asciishift;
            str[i] = (char)decyptedCh;
        }
    
    return decryption;
}

/*
Function 5
Function Name: ComputeAverage
Function Parameters: double[], unsigned int(size of array)
Function Return: double
Function Description: This function will compute the mean average of the values in the array.
The array will always be at least size of 1.
*/
double ComputeAverage(double values[], unsigned int size) {
    double total = 0.0;
    double avg = 0.0;
    for (unsigned int i = 0; i < size; i++) {
        total = total + values[i];
    }
    avg = total / size;
    return avg;
}

/*
Function 6
Function Name: FindMinValue
Function Parameters: double[], unsigned int(size of array)
Function Return: double
Function Description: This function will find and return the smallest value in an array. The
array will always be at least of size 1.
*/
double FindMinValue(double values[], unsigned int size) {
    double minValue = values[0];
        for (unsigned int i = 0; i < size; i++) {
            if (values[i] <= minValue) {
                minValue = values[i];
            }
        }
    return minValue;
}

/*
Function 7
Function Name: FindMaxValue
Function Parameters: double[], unsigned int(size of array)
Function Return: double
Function Description: This function will find and return the largest value in an array. The array
will always be at least of size 1.
*/

double FindMaxValue(double values[], unsigned int size) {
    double maxValue = values[0];
        for (unsigned int i = 0; i < size; i++) {
            if (values[i] >= maxValue) {
                maxValue = values[i];
            }
        }
    return maxValue;
}