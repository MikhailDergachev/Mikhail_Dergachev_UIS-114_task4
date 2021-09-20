#pragma once
#include <string>
#include <iostream>
#include "preschooler.h"

class schooler: public preschooler
{
protected:
    /**
     * @brief возраст age 
     * 
     */
    double age;

public:
    schooler::schooler();
    /**
     * @brief Параметризированный конструктор
     * @param age возраст человека 
     */

    explicit schooler(const double age);
    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    schooler(const schooler& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    schooler(schooler&& other) = default;

    /**
     * @brief Деструктор
     */
    ~schooler() = default;

    /**
     * @brief Геттер для возраста
     */
    double get_age() const;    

    /**
     * @brief переназначение возраста 
     * @return переназначенное age
     */
    void set_age(const double age);

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const schooler& vector);
};