#pragma once
#include <string>
#include <iostream>
#include "schooler.h"

class student: public schooler
{
protected:
    /**
     * @brief пол человека man_woman
     */
    std::string gender;

public:
    
    /**
     * @brief Конструктор по умолчанию
     * 
     */
    student::student();
    
    /**
     * @brief Параметризированный конструктор
     * @param gender пол человека
     */

    explicit student(const std::string gender);

    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    student(const student& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    student(student&& other) = default;

    /**
     * @brief Деструктор
     */
    ~student() = default;

    /**
     * @brief Геттер для пола
     */
    std::string get_gender() const;

    /**
     * @brief переназначение пола
     * @return переназначенное gender
     */

    void set_gender(const std::string gender);

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const student& vector);

};