#include <string>
#include <sstream>
#include <iostream>
#include "schooler.h"

schooler::schooler(const double age)
    : age(age) {}

double schooler::get_age() const {
    return this->age;
}

void schooler::set_age(const double age)
{
    this->age = age;
};

std::string schooler::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_age() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const schooler& vector)
{
    return out << vector.to_string();
}