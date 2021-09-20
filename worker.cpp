#include <string>
#include <sstream>
#include <iostream>
#include "worker.h"

worker::worker(const double salary)
    : salary(salary) {}

double worker::get_salary() const {
    return this->salary;
}
double average_income(const double salary) {
    return salary/29.3*12;
}


std::string worker::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_salary() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const schooler& vector)
{
    return out << vector.to_string();
}