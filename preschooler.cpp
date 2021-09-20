#include <string>
#include <sstream>
#include <iostream>
#include "preschooler.h"

preschooler::preschooler(const std::string name, const std::string surname, const std::string second_name)
    : name(name), surname(surname), second_name(second_name) {}

std::string preschooler::get_name() const {
    return this->name;
}

std::string preschooler::get_surname() const {
    return this->surname;
}

std::string preschooler::get_second_name() const {
    return this->second_name;
}


void preschooler::set_name(const std::string name)
{
    this->name = name;
};

void preschooler::set_surname(const std::string surname)
{
    this->surname = surname;
};

void preschooler::set_second_name(const std::string second_name)
{
    this->second_name = second_name;
};
 

std::string preschooler::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_name() << ", ";
    buffer << this->get_surname() << ", ";
    buffer << this->get_second_name() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const preschooler& vector)
{
    return out << vector.to_string();
}



