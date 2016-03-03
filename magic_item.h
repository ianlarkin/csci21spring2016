/*
 * Name        : magic_item.h
 * Author      : Ian Larkin
 * Description : MagicItem Class Header File - derived class
 */



#pragma once

#include "item.h"

class MagicItem : public Item {
    public:
        
        //Constructor with 4 parameters
        //defaults are
        //name = magicitem
        //value = 0
        //description = no description
        //mana_required  = 0
        MagicItem(string name = "magicitem", unsigned int value = 0, string description = "no description", unsigned int mana_required = 0);
        
        //destructor
        virtual ~MagicItem();
        
        //gettings for description and mana required
        string description();
        unsigned int mana_required();
        
        
        //setters for description and mana required
        //one parameter for each
        void set_description(string description);
        void set_mana_required(unsigned int mana_required);
        
        //output function
        string ToString();
        
    private:
        string description_;
        unsigned int mana_required_;
};
