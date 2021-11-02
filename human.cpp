#include <string>
#include <sstream>
#include <iostream>

#include "human.h"


human_exeption::human_exeption() {
    error_message_ = "Unknown";
}

human_exeption::human_exeption(const std::string& error_message) {
    error_message_ = error_message;
}

std::string human_exeption::get_error_message() const {
    return error_message_;
}


const double human::k_avr_salary_koef = 12.0 / 29.3;

human::human(const std::string& name, const std::string& surname,
    const std::string& second_name, const double age,
    const std::string& gender) {
    set_name(name);
    set_surname(surname);
    set_second_name(second_name);
    set_age(age);
    set_gender(gender);
}

std::string human::get_name() const {
    return name_;
}

std::string human::get_surname() const {
    return surname_;
}

std::string human::get_second_name() const {
    return second_name_;
}

double human::get_age() const {
    return age_;
}

std::string human::get_gender() const {
    return gender_;
}

void human::set_name(const std::string& name) {
    if (name == "") {
        throw human_exeption("Uncorrent name. Not allowed empty");
    }
    name_ = name;
};

void human::set_surname(const std::string& surname) {
    if (surname == "") {
        throw human_exeption("Uncorrent surname. Not allowed empty");
    }
    surname_ = surname;
};

void human::set_second_name(const std::string& second_name) {
    if (second_name == "") {
        throw human_exeption("Uncorrect second name. Not allowed empty");
    }
    second_name_ = second_name;
};

void human::set_age(const double age) {
    if (age < 0) {
        throw human_exeption("Uncorrect age. Only greater or equal 0");
    }
    age_ = age;
};

void human::set_gender(const std::string& gender) {
    if (gender != "male" && gender != "female") {
        throw human_exeption("Uncorrect gender. Only male or female");
    }
    gender_ = gender;
};

std::ostream& operator<<(std::ostream& out, const human& object) {
    out << "{"
        << object.get_name() << ", "
        << object.get_surname() << ", "
        << object.get_second_name() << ", "
        << object.get_age() << ", "
        << object.get_gender() << "}";
    return out;
}
