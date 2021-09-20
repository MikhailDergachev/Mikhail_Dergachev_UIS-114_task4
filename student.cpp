#include <string>
#include <sstream>
#include <iostream>
#include "student.h"

student::student(const std::string gender)
    : gender(gender) {}

std::string student::get_gender() const {
    return this->gender;
}

void student::set_gender(const std::string gender)
{
    this->gender = gender;
};

std::string student::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_gender() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const student& vector)
{
    return out << vector.to_string();
}