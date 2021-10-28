#pragma once
#include <string>

#include "human.h"

class student: public human {
public:
    /**
     * @brief Конструктор копирования
     */
    student(const student& other) = default;

    /**
     * @brief Деструктор
     */
    ~student() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    student(const std::string& name, const std::string& surname,
            const std::string& second_name, const double& age,
            const std::string& gender, const double& salary)
        : human(name, surname, second_name, age, gender, salary)
    {
    };
};
