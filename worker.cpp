#include "worker.h"

double worker::get_salary() const {
    return salary_;
}

void worker::set_salary(const double salary) {
    if (salary < 0) {
        throw human_exeption("Uncorrect salary. Only greater or equal 0");
    }
    salary_ = salary;
}

double worker::average_income() const {
    return salary_ * human::k_avr_salary_koef;
}

std::ostream& operator<<(std::ostream& out, const worker& object) {
    out << "{"
        << object.get_name() << ", "
        << object.get_surname() << ", "
        << object.get_second_name() << ", "
        << object.get_age() << ", "
        << object.get_gender() << ", "
        << object.get_salary() << "}";
    return out;
}