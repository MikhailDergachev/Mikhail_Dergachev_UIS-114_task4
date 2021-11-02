#pragma once
#include <string>

#include "human.h"

class worker : public human {
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
    worker();

public:
    /**
     * @brief Конструктор копирования
     */
    worker(const worker& other) = default;

    /**
     * @brief Деструктор
     */
    virtual ~worker() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    worker(const std::string& name, const std::string& surname,
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
    friend std::ostream& operator<<(std::ostream& out, const worker& object);
};
