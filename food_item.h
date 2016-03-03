/*
 * Name        : food_item.h
 * Author      : Ian Larkin
 * Description : FoodItem Class Header File - derived class
 */


#pragma once

#include "item.h"


class FoodItem : public Item {
    public:
    
        //Constructor with 5 parameters
        //defaults are
        //name = fooditem
        //value = 0
        //calories = 0
        //unit of measure = nounits
        //units = 0
        FoodItem(string name = "fooditem", unsigned int value = 0, unsigned int calories = 0, string unit_of_measure = "nounits", double units = 0);
        
        //Destructor
        virtual ~FoodItem();
        
        //getter functions for units, calories, units of measure
        string unit_of_measure();
        unsigned int calories();
        double units();
        
        
        //setter functions for calories, units, unit of measure
        void set_unit_of_measure(string unit_of_measure);
        void set_calories(unsigned int calories);
        void set_units(double units);
        
        //function for output
        string ToString();
        
    private:
        unsigned int calories_;
        string unit_of_measure_;
        double units_;
    
};
