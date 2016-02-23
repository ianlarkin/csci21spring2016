/*
 * Name        : lab_9.cpp
 * Author      : Ian Larkin
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS

//Mutator function for name
//@param string name - name of spaceship
void Spaceship::set_name(string name) {
    name_ = name;
}

//Mutator function for top speed
//@param double top_speed - top speed of the spaceship (warp)
void Spaceship::set_top_speed(double top_speed) {
    top_speed_ = top_speed;
}

//Mutator function for fuel source
//@param string fuel_source - type of fuel used by spaceship
void Spaceship::set_fuel_source(string fuel_source) {
    fuel_source_ = fuel_source;
}

//Mutator function for name
//@param int crew_capacity - size of the crew of the spaceship
void Spaceship::set_crew_capacity(int crew_capacity) {
    crew_capacity_ = crew_capacity;
}

//Accessor function for name
//@return string - Spaceship name
string Spaceship::name() const {
    return name_;
}

//Accessor function for topspeed
//@return double - Spaceship's top speed in warp
double Spaceship::top_speed() const {
    return top_speed_;
}

//Accessor function for fuel source
//@return string - Spaceship's fuel source
string Spaceship::fuel_source() const {
    return fuel_source_;
}

//Accessor function for crew capacity
//@return int - Crew capacity for Spaceship
int Spaceship::crew_capacity() const {
    return crew_capacity_;
}


//Function for displaying the attributes of the space ship.
//Formatted for clarity
//uses stringstream 
//@return string - formatted output of spaceship data

string Spaceship::ToString() const {
    //stringstreams for formatting
    stringstream formatted_top_speed; 
    stringstream formatted_crew_capacity;
    formatted_top_speed << std::setprecision(2) << std::fixed << top_speed();
    formatted_crew_capacity << crew_capacity();
    
    //variable declaration for concatenation of all data into string format
    string formatted_output;
    formatted_output = name() +'\n' + "Top Speed:     Warp " + formatted_top_speed.str() +'\n' + "Fuel Source:   " + fuel_source() + '\n' + "Crew Capacity: " + formatted_crew_capacity.str();
    
    //return the output
    return formatted_output;
}



