#ifndef __PERSON_H_
#define __PERSON_H_
#include<string>
#include<array>
#include<random>

enum class Status
{
    Normal,
    Infectious,
};

class Person
{
private:
    Status _status = Status::Normal;
    // location is two dimensional
    std::array<double, 2> _curr_location = {0.0, 0.0};
    // Each person should get a unique id
    const unsigned int _id;

    // static class member: shared across all class objects
    // inline: so we can initialize it here, see worksheet.
    static inline unsigned int counter = 0;
public:
    Person(std::array<double,2>);

    std::array<double,2> get_location();

    void advance();

    unsigned int get_id();

    // TODO: We do not want copies of "Person"
    // since each person has a unique id.
    Person(const Person& other);
    Person& operator=(const Person& other);


};



#endif // __PERSON_H_
