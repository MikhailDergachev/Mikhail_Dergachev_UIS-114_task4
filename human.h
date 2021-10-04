#pragma once
#include <string>
#include <iostream>

class human {
private:
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
    
    /**
     * @brief возраст age 
     * 
     */
    double age;
    
    /**
     * @brief пол человека man_woman
     */
    std::string gender;
    
    /**
     * @brief Зарплата
     */
    double salary;


public:

    /**
     * @brief Конструктор по умолчанию
     * 
     */
    human::human();
    /**
     * @brief Параметризированный конструктор
     * @param salary доход
     * @param gender пол человека
     * @param age возраст человека
     * @param name имя человека
     * @param surname фамилия человека
     * @param second_name отчество человека
     */

    explicit human(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary);
    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    human(const human& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    human(human&& other) = default;

    /**
     * @brief Деструктор
     */
    ~human() = default;

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
   
    /**
     * @brief Геттер для возраста
     */
    double get_age() const;    

    /**
     * @brief переназначение возраста 
     * @return переназначенное age
     */
    void set_age(const double age);
    
    /**
     * @brief Геттер для пола
     */
    std::string get_gender() const;

    /**
     * @brief переназначение пола
     * @return переназначенное gender
     */

    void set_gender(const std::string gender);

    /**
     * @brief Геттер для дохода
     */
    double get_salary() const;    

    /**
     * @brief метод получения среднего денежного дохода в денежном эквиваленте 
     */
    double average_income(const double salary); 

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const human& helper);

};

class preschooler: public human{
    public:

    /**
     * \brief Конструктор копирования
     */
    preschooler(const preschooler& other);

    /**
     * @brief Деструктор
     */
    ~preschooler() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    preschooler(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary)
    : human(name,surname,second_name,age,gender,salary){};

    /**
     * @brief Метод для корректного вывода ответа
     */
    std::string ToString();

};
class schooler: public human{
       public:
    
    /**
     * \brief Конструктор копирования
     */
    schooler(const schooler& other);
    
    /**
     * @brief Деструктор
     */
    ~schooler() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    schooler(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary)
    : human(name,surname,second_name,age,gender,salary){};

    /**
     * @brief Метод для корректного вывода ответа
     */
    std::string ToString();

};
class student: public human{
       public:

    /**
     * \brief Конструктор копирования
     */
    student(const student& other);

    /**
     * @brief Деструктор
     */
    ~student() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    student(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary)
    : human(name,surname,second_name,age,gender,salary){};

    /**
     * @brief Метод для корректного вывода ответа
     */
    std::string ToString();

};
class worker: public human{
    public:
    
    /**
     * \brief Конструктор копирования
     */
    worker(const worker& other);
    
    /**
     * @brief Деструктор
     */
    ~worker() = default;

    /**
     * @brief Конструктор нового объекта.
     */
    worker(const std::string& name, const std::string& surname, const std::string& second_name, const double age,const std::string& gender,const double salary)
    : human(name,surname,second_name,age,gender,salary){};

    /**
     * @brief Метод для корректного вывода ответа
     */
    std::string ToString();
};