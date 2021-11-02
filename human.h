#pragma once
#include <string>
#include <iostream>

class human_exeption {
public:
    /**
     * @brief Конструктор по умолчанию
     *
     */
    human_exeption();

    /**
     * @brief Параметризированный конструктор
     * @param message сообщение с ошибкой
     */
    human_exeption(const std::string& error_message);

    /**
     * @brief Геттер для сообщения с ошибкой
     */
    std::string get_error_message() const;

private:
    /**
     * @brief Сообщение с ошибкой
     */
    std::string error_message_;
};

class human {
private:
    /**
     * @brief Имя
     */
    std::string name_;

    /**
     * @brief Фамилия
     */
    std::string surname_;

    /**
     * @brief Отчество
     */
    std::string second_name_;

    /**
     * @brief Возраст
     *
     */
    double age_;

    /**
     * @brief Пол человека male/female
     */
    std::string gender_;

protected:
    /**
     * @brief Коэффициент для перевода в денежный эквивалент
     */
    const static double k_avr_salary_koef;
    
    /**
     * @brief Конструктор по умолчанию
     *
     */
    human();

public:
    /**
     * @brief Параметризированный конструктор
     * @param salary доход
     * @param gender пол человека
     * @param age возраст человека
     * @param name имя человека
     * @param surname фамилия человека
     * @param second_name отчество человека
     */
    explicit human(const std::string& name, const std::string& surname,
        const std::string& second_name, const double age,
        const std::string& gender);

    /**
     * @brief Конструктор копирования
     * @param other объект класса
     */
    human(const human& other) = default;

    /**
     * @brief Конструтор перемещения
     * @param other объект класса
     */
    human(human&& other) = default;

    /**
     * @brief Деструктор
     */
    virtual ~human() = default;

    /**
     * @brief Геттер для имени
     */
    std::string get_name() const;

    /**
     * @brief Геттер для фамилии
     */
    std::string get_surname() const;

    /**
     * @brief Геттер для отчества
     */
    std::string get_second_name() const;

    /**
     * @brief Переназначение имени
     * @param name новое имя
     */
    void set_name(const std::string& name);

    /**
     * @brief Переназначение фамилии
     * @param surname новая фамилия
     */
    void set_surname(const std::string& surname);

    /**
     * @brief Переназначение отчества
     * @param second_name новое отчество
     */
    void set_second_name(const std::string& second_name);

    /**
     * @brief Геттер для возраста
     */
    double get_age() const;

    /**
     * @brief Переназначение возраста
     * @param age новый возраст
     */
    void set_age(const double age);

    /**
     * @brief Геттер для пола
     */
    std::string get_gender() const;

    /**
     * @brief Переназначение пола
     * @param age новый пол
     */
    void set_gender(const std::string& gender);

    /**
     * @brief Дружественная функция вывода объекта
     */
    friend std::ostream& operator<<(std::ostream& out, const human& object);
};
