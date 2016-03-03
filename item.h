/*
 * Name        : item.h
 * Author      : Ian Larkin
 * Description : Item Class Header File - Base Class
 */
 
#pragma once

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;


class Item {
    public:
        //Constructor with two parameters
        //Default name to item and value to 0
        Item(string name = "item", unsigned int value = 0);
        
        //Desctructor
        ~Item();
        
        //getter functions for name and value
        string name();
        unsigned int value();
        
        //setter values for name and value
        void set_name(string name);
        void set_value(unsigned int value);
        
        //output function
        string ToString();
        
    private:
        string name_;
        unsigned int value_;
};

