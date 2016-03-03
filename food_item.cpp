/*
 * Name        : food_item.cpp
 * Author      : Ian Larkin
 * Description : FoodItem Class Function definitions
 */
#include "food_item.h"

//Constructor with 5 parameters
//defaults are
//name = fooditem
//value = 0
//calories = 0
//unit of measure = nounits
//units = 0
FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units) {
    set_name(name);
    set_value(value);
    calories_ = calories;
    unit_of_measure_ = unit_of_measure;
    units_ = units;
}


//Destructor - Does nothing
FoodItem::~FoodItem() {}

//function to return contents of unit_of_measure_        
string FoodItem::unit_of_measure() {
    return unit_of_measure_;
}

//function to return contents of calories_
unsigned int FoodItem::calories() {
    return calories_;
}

//function to return contents of units
double FoodItem::units() {
    return units_;
}
  
//function to set unit_of_measure_
//1 parameter - string unit_of_measure
void FoodItem::set_unit_of_measure(string unit_of_measure) {
    unit_of_measure_ = unit_of_measure;
}

//function to set calories_
//1 parameter - unsigned int calories
void FoodItem::set_calories(unsigned int calories) {
    calories_ = calories;
}

//Function to set units_
//1 Parameter - double units
void FoodItem::set_units(double units) {
    units_ = units;
}

//function for output
//format
//name_, $value_, units_ unit_of_measure_, calories_ calories
//formatted to 2 decimal places 
string FoodItem::ToString() {
  

    stringstream ss;
    ss.precision(2);
    ss << std::fixed;
    string output = "";
    ss << name() << ", $" << value() << ", " << units() << " " << unit_of_measure() << ", " << calories() << " calories";
    output = ss.str();
    return output;

}