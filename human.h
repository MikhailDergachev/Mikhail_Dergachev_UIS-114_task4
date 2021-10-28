#pragma once
#include <string>
#include <iostream>

class human_exeption {
public:
    /**
     * @brief ����������� �� ���������
     *
     */
    human_exeption();

    /**
     * @brief ������������������� �����������
     * @param message ��������� � �������
     */
    human_exeption(const std::string& error_message);

    /**
     * @brief ������ ��� ��������� � �������
     */
    const char* get_error_message() const;

private:
    /**
     * @brief ��������� � �������
     */
    std::string error_message_;
};

class human {
private:
    /**
     * @brief ����������� ��� �������� � �������� ����������
     */
    const static double k_avr_salary_koef;

    /**
     * @brief ���
     */
    std::string name_;

    /**
     * @brief �������
     */
    std::string surname_;

    /**
     * @brief ��������
     */
    std::string second_name_;

    /**
     * @brief �������
     *
     */
    double age_;

    /**
     * @brief ��� �������� male/female
     */
    std::string gender_;

    /**
     * @brief ��������
     */
    double salary_;

protected:
    /**
     * @brief ����������� �� ���������
     *
     */
    human();

public:
    /**
     * @brief ������������������� �����������
     * @param salary �����
     * @param gender ��� ��������
     * @param age ������� ��������
     * @param name ��� ��������
     * @param surname ������� ��������
     * @param second_name �������� ��������
     */
    explicit human(const std::string& name, const std::string& surname,
                   const std::string& second_name, const double& age,
                   const std::string& gender, const double& salary);

    /**
     * @brief ����������� �����������
     * @param other ������ ������
     */
    human(const human& other) = default;

    /**
     * @brief ���������� �����������
     * @param other ������ ������
     */
    human(human&& other) = default;

    /**
     * @brief ����������
     */
    ~human() = default;

    /**
     * @brief ������ ��� �����
     */
    std::string get_name() const;

    /**
     * @brief ������ ��� �������
     */
    std::string get_surname() const;

    /**
     * @brief ������ ��� ��������
     */
    std::string get_second_name() const;

    /**
     * @brief �������������� �����
     * @param name ����� ���
     */
    void set_name(const std::string& name);

    /**
     * @brief �������������� �������
     * @param surname ����� �������
     */
    void set_surname(const std::string& surname);

    /**
     * @brief �������������� ��������
     * @param second_name ����� ��������
     */
    void set_second_name(const std::string& second_name);

    /**
     * @brief ������ ��� ��������
     */
    double get_age() const;

    /**
     * @brief �������������� ��������
     * @param age ����� �������
     */
    void set_age(const double& age);

    /**
     * @brief ������ ��� ����
     */
    std::string get_gender() const;

    /**
     * @brief �������������� ����
     * @param age ����� ���
     */
    void set_gender(const std::string& gender);

    /**
     * @brief ������ ��� ������
     */
    double get_salary() const;

    /**
     * @brief �������������� ������
     * @param salary ����� �����
     */
    void set_salary(const double& salary);

    /**
     * @brief ����� ��������� �������� ��������� ������ � �������� �����������
     */
    double average_income() const;

    /**
     * @brief ������������� ������� ������ �������
     */
    friend std::ostream& operator<<(std::ostream& out, const human& object);
};
