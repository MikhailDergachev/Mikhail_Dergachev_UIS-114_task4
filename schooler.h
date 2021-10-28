#pragma once
#include <string>

#include "human.h"

class schooler: public human {
public:
    /**
     * @brief ����������� �����������
     */
    schooler(const schooler& other) = default;

    /**
     * @brief ����������
     */
    ~schooler() = default;

    /**
     * @brief ����������� ������ �������.
     */
    schooler(const std::string& name, const std::string& surname,
             const std::string& second_name, const double& age,
             const std::string& gender)
        : human(name, surname, second_name, age, gender, 0)
    {
    };
};
