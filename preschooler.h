#pragma once
#include <string>

#include "human.h"

class preschooler: public human {
public:
    /**
     * @brief ����������� �����������
     */
    preschooler(const preschooler& other);

    /**
     * @brief ����������
     */
    ~preschooler() = default;

    /**
     * @brief ����������� ������ �������.
     */
    preschooler(const std::string& name, const std::string& surname,
                const std::string& second_name, const double& age,
                const std::string& gender)
        : human(name, surname, second_name, age, gender, 0)
    {
    };
};
