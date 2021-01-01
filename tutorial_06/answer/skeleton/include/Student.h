#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"

class Student {
    // TODO
private:
    std::string _name = "";
    std::string _registration_number = "";
    
    std::vector<Course> _course_list = {};

public:   
    Student(std::string,std::string);
    void register_for(Course);
    void print_course();

};

#endif // STUDENT_H