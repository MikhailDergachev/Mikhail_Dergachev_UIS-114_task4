#include <string>
#include <sstream>
#include <iostream>
#include "human.h"

human::human(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary)
    : name(name), surname(surname), second_name(second_name), age(age), gender(gender), salary(salary) {}

std::string human::get_name() const {
    if (name == "") {
        throw;
    }
    return this->name;
}

std::string human::get_surname() const {
    if (surname == "") {
        throw;
    }
    return this->surname;
}

std::string human::get_second_name() const {
    return this->second_name;
}


void human::set_name(const std::string name)
{
    this->name = name;
};

void human::set_surname(const std::string surname)
{
    this->surname = surname;
};

void human::set_second_name(const std::string second_name)
{
    this->second_name = second_name;
};

double human::get_age() const {
    if (age <= 0) {
        throw;
    }
    return this->age;
}

void human::set_age(const double age)
{
    this->age = age;
};

std::string human::get_gender() const {
    return this->gender;
}

void human::set_gender(const std::string gender)
{
    this->gender = gender;
};

double human::get_salary() const {
    return this->salary;
}
double average_income(const double salary) {
    return salary/29.3*12;
}


std::string human::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_name() << ", ";
    buffer << this->get_surname() << ", ";
    buffer << this->get_second_name() << ", ";
    buffer << this->get_age() << ", ";
    buffer << this->get_gender() << ", ";
    buffer << this->get_salary() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const human& helper)
{
    return out << helper.to_string();
}