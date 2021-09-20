/*«дошкольник»
    ФИО
«школьник»
    возраста
«студент»
    полаa
«работающий»
    методы получения среднего дохода в денежном эквиваленте(Средний дн. заработок = зарплата / 29,3 х 12)
*/
#pragma once
#include <string>
#include <iostream>

class preschooler {
protected:
    /**
     * @brief Имя
     */
    std::string name;

   /**
     * @brief Фамилия
     */
    std::string surname;

    /**
     * @brief Отчество
     */
    std::string second_name;

public:

    /**
     * @brief Конструктор по умолчанию
     * 
     */
    preschooler::preschooler();
    /**
     * @brief Параметризированный конструктор
     * @param name имя человека
     * @param surname фамилия человека
     * @param second_name отчество человека
     */

    explicit preschooler(const std::string name, const std::string surname, const std::string second_name);
    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    preschooler(const preschooler& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    preschooler(preschooler&& other) = default;

    /**
     * @brief Деструктор
     */
    ~preschooler() = default;

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
     * @brief переназначение имени 
     * @return переназначенное name
     */

    void set_name(const std::string name);

    /**
     * @brief переназначение имени 
     * @return переназначенное name
     */

    void set_surname(const std::string surname);

    /**
     * @brief переназначение имени 
     * @return переназначенное name
     */

    void set_second_name(const std::string second_name);

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const preschooler& vector);

};   