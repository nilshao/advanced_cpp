#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

Student::Student(std::string name,std::string num): _name(name), _registration_number(num) {}
void Student::register_for(Course course){
    _course_list.push_back(course);
}

void Student::print_course(){
    std::cout << _name << "has following courses: "<<std::endl;
    for(auto &item: _course_list){
       std::cout << item._name << " ";
    }
    std::cout <<std::endl;
}
