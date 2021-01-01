#ifndef COURSE_H
#define COURSE_H

#include <string>

// TODO
enum class Course_Type
{
    Lecture,
    Seminar,
    Practical,
};

class Course {
private:
    std::string _course_id;
    Course_Type _type;
public:
    Course(_course_id ,Course_Type) const;
    std::string get_id();
};

#endif // COURSE_Η