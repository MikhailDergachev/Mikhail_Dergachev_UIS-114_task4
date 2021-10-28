#pragma once
#include <string>

#include "human.h"

class worker: public human {
public:
    /**
     * @brief ����������� �����������
     */
    worker(const worker& other) = default;

    /**
     * @brief ����������
     */
    ~worker() = default;

    /**
     * @brief ����������� ������ �������.
     */
    worker(const std::string& name, const std::string& surname,
           const std::string& second_name, const double& age,
           const std::string& gender, const double& salary)
        : human(name, surname, second_name, age, gender, salary)
    {
    };
};
