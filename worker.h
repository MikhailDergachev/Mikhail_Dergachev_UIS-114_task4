#pragma once
#include <string>
#include <iostream>
#include "student.h"

class worker: public student
{
protected:
    /**
     * @brief Зарплата
     */
    double salary;

public:
    /**
     * @brief Конструктор по умолчанию
     * 
     */
    worker::worker();
    
    /**
     * @brief Параметризированный конструктор
     * @param gender пол человека
     */

    explicit worker(const double salary);

    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    worker(const worker& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    worker(worker&& other) = default;

    /**
     * @brief Деструктор
     */
    ~worker() = default;

     /**
     * @brief Геттер для дохода
     */
    double get_salary() const;    

    /**
     * @brief метод получения среднего денежного дохода в денежном эквиваленте 
     */
    double average_income(const double salary); 

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const worker& vector);
};