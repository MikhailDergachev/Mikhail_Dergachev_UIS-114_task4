#include <string>
#include <sstream>
#include <iostream>
#include "human.h"

human::human(const std::string name, const std::string surname, const std::string second_name, const double age, const bool gender,const double salary)
    : name(name), surname(surname), second_name(second_name), age(age), gender(gender), salary(salary) {}

std::string human::get_name() const {
    return this->name;
}

std::string human::get_surname() const {
    return this->surname;
}

std::string human::get_second_name() const {
    return this->second_name;
}

double human::get_age() const {
    return this->age;
}

bool human::get_gender() const {
    return this->gender;
}

double human::get_salary() const {
    return this->salary;
}

void set_name(const string &name)
{
    if (name == "") {
        throw;
    }
    return this->name;
};

void set_surname(const string &surname)
{
    if (surname == "") {
        throw;
    }
    return this->surname;
};

void set_second_name(const string &second_name)
{
    if (second_name == "") {
        throw;
    }
    return this->second_name;
};

void set_age(const double age)
{
    if (age <= 0) {
        throw;
    }
    return this->age;
};

void set_gender(const bool this->gender)
{
    if (this->gender == true) {
        _gender = "Мужчина";
    } else {
        _gender = "Женщина";
    }
};

void set_salary(const double salary)
{
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
