#include "person.h"

// 1. TODO: Implement a constructor that takes a location array and creates a unique_id for the object.
Person::Person(std::array<double,2> initial_loc): _curr_location(initial_loc), _id(Person::counter++){}

// 2. TODO: Implement the copy constructor
Person::Person(const Person& other): _id(Person::counter++){
    _curr_location = other._curr_location;
    _status = other._status;
}

// 3. TODO: Implement the copy assignment operator.
Person& Person::operator=(const Person& other){
    _curr_location = other._curr_location;
    _status = other._status;
    return *this;
}


std::array<double,2> Person::get_location(){
   return _curr_location;
}

unsigned Person::get_id(){
    return _id;
}

void Person::advance(){
    // for now, do advance doesn't
    // do anything sensible
    _curr_location[0] += 0.1;
    _curr_location[1] -= 0.1;
}

