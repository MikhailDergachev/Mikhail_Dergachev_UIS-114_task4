#pragma once
#include <string>

#include "human.h"

class student : public human {
private:
    /**
     * @brief Зарплата
     */
    double salary_;

protected:
    /**
     * @brief Конструктор по умолчанию
     *
     */
    student();

public:
    /**
     * @brief Конструктор копирования
     */
    student(const student& other) = default;

    /**
     * @brief Деструктор
     */
    virtual ~student() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    student(const std::string& name, const std::string& surname,
        const std::string& second_name, const double age,
        const std::string& gender, const double salary)
        : human(name, surname, second_name, age, gender)
    {
        set_salary(salary);
    };

    /**
     * @brief Геттер для дохода
     */
    double get_salary() const;

    /**
     * @brief Переназначение дохода
     * @param salary новый доход
     */
    void set_salary(const double salary);

    /**
     * @brief Метод получения среднего денежного дохода в денежном эквиваленте
     */
    double average_income() const;

    /**
     * @brief Дружественная функция вывода объекта
     */
    friend std::ostream& operator<<(std::ostream& out, const student& object);
};
