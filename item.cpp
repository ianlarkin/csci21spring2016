/*
 * Name        : item.cpp
 * Author      : Ian Larkin
 * Description : Class function definitions
 */
 
 

#include "item.h"

//Constructor with two parameters
//sets name_ and value_ with appropriate values
Item::Item(string name, unsigned int value) {
    set_name(name);
    set_value(value);
}

//destructor - does nothing
Item::~Item() {}

//function to return contents of name
string Item::name() {
    return name_;
}

//function to return contents of value
unsigned int Item::value() {
    return value_;
}

//function to set name_
//1 parameter - string name
void Item::set_name(string name) {
    name_ = name;
}


//function to set value
//1 parameter - unsigned int value
void Item::set_value(unsigned int value) {
    value_ = value;
}
        
        
//Function for outputting 
//Format name_, $value_
string Item::ToString() {
    
    stringstream ss;
    string output;
    
    ss << name() << ", $" << value();
    output = ss.str();
    return output;
}