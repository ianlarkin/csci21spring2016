/*
 * Name        : lab_5.cpp
 * Author      : Ian Larkin
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
void Hello() {
    cout << "Hello world!";
    
}

void PrintMessage(const string& newStr) {
    cout << newStr;
}

int GetAnswer() {
    return 42;
}

int FindLarger(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}
/*
string BuildMessage() {
    return "Message: empty";
}

string BuildMessage(string newStr) {
    if (newStr == "") {
        return "Message: empty";
    } else {
        return "Message: " + newStr;
    }
    
}
*/

string BuildMessage(string newStr, bool upper) {
    if (newStr == "") {
        return "Message: empty";
    } else {
        if (upper == true) {
            for(unsigned int i = 0; i < newStr.length(); i++) {
            newStr[i] = toupper(newStr[i]);
            }
        }
        return "Message: " + newStr;
    }
    
}


 /* Testing functions
 int main() {
     Hello();
     cout << endl;
     PrintMessage("hello i am from space");
     cout << endl;
     
     cout << FindLarger(9,33) << endl;
     cout << FindLarger(77,4) << endl;
     cout << FindLarger(6,6) << endl;
     
     PrintMessage("previous");
     
     cout << BuildMessage("",false) << endl;
     cout << BuildMessage("",true) << endl;
     cout << BuildMessage("Alpha one two niner",false) << endl;
     cout << BuildMessage("tacos are great",true) << endl;
     
     
 }
*/ 