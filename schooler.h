#pragma once
#include <string>

#include "human.h"

class schooler : public human {
public:
    /**
     * @brief Конструктор копирования
     */
    schooler(const schooler& other) = default;

    /**
     * @brief Деструктор
     */
    virtual ~schooler() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    schooler(const std::string& name, const std::string& surname,
        const std::string& second_name, const double age,
        const std::string& gender)
        : human(name, surname, second_name, age, gender)
    {
    };

protected:
    /**
     * @brief Конструктор по усполчанию
     */
    schooler();
};
