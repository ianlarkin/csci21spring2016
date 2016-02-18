/*
 * Name        : lab_7.cpp
 * Author      : Ian Larkin
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()


bool ProcessFile(string filename) {
    
    ifstream fin(filename.c_str());
	if (fin.good()) {
		int nextNumber;
		while (!fin.eof()) {
	        fin >> nextNumber;
	        switch(nextNumber) {
            case 10:
                OnTen();
                break;
            case 20:
                OnTwenty();
                break;
            case 30:
                OnThirty();
                break;
            case 40:
                OnForty();
                break;
            case 50:
                OnFifty();
                break;
            default:
                OnError();
                break;
	        }
		}
		return true;
	} else {
	    return false;
	}
}


void ProcessArguments(int argc, char* argv[]) {
    stringstream ss;
    int nextNumber = 0;
    for(int i = 1; i < argc; i++) {
    ss.str(argv[i]);
    ss >> nextNumber;
    
    switch(nextNumber) {
            case 10:
                OnTen();
                break;
            case 20:
                OnTwenty();
                break;
            case 30:
                OnThirty();
                break;
            case 40:
                OnForty();
                break;
            case 50:
                OnFifty();
                break;
            default:
                OnError();
                break;
	        }
	    ss.str("");    
	    ss.clear();
    }
}