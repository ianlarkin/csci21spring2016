/*
 * Name        : magic_item.cpp
 * Author      : Ian Larkin
 * Description : MagicItem Class Function definitions
 */
#include "magic_item.h"




//Constructor with 4 parameters
        //defaults are
        //name = magicitem
        //value = 0
        //description = no description
        //mana_required  = 0
MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana_required) {
    set_name(name);
    set_value(value);
    description_ = description;
    mana_required_ = mana_required;
}
//destructor - does nothing
MagicItem::~MagicItem() {}
 
//function to return contents of description_        
string MagicItem::description() {
    return description_;
}

//function to return contents of mana_required_
unsigned int MagicItem::mana_required() {
    return mana_required_;
}

//function to set contents of description_
//one parameter = string description
void MagicItem::set_description(string description) {
    description_ = description;
}

//function to set contents of mana_required_
//1 parameter = unsigned int mana_required
void MagicItem::set_mana_required(unsigned int mana_required) {
    mana_required_ = mana_required;
}
        
//output function
//format
//name_, $value_, description_, requires mana_required_ mana
string MagicItem::ToString() {

    stringstream ss;
    string output;
    
    ss << name() << ", $" << value() << ", " << description() << ", requires " << mana_required() << " mana";
    output = ss.str();
    return output;



}