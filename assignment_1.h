/*
 * Name        : Assignment 1
 * Author      : Ian Larkin
 * Description : Header file for assignment 1
 * Sources     : wikipedia, cplusplus.com
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


bool CheckAlphabetic(string const &str);
int CountWords(string str);
bool EncryptString(string &str, int shiftAmt);
bool DecryptString(string &str, int shiftAmt);
double ComputeAverage(double values[], unsigned int size);
double FindMinValue(double values[], unsigned int size);
double FindMaxValue(double values[], unsigned int size);

#endif /* ASSIGNMENT_1_H */
