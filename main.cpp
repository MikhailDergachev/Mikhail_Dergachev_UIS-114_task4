#include <iostream>

#include "human.h"
#include "preschooler.h"
#include "schooler.h"
#include "student.h"
#include "worker.h"

void print_menu() {
    std::cout << "Choose type of class\n"
        << "1. Preschooler\n"
        << "2. Schooler\n"
        << "3. Student\n"
        << "4. Worker\n"
        << "0. Exit\n"
        << ">>> ";
}

void test_preschooler() {
    std::string name, surname, second_name, gender;
    double age;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter second name: ";
    std::cin >> second_name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter gender (male/female): ";
    std::cin >> gender;

    try {
        preschooler test(name, surname, second_name, age, gender);
        std::cout << "You entered: " << test << "\n";
        std::cout << "Average income in monetary terms: "
            << test.average_income() << "\n";
    } catch (human_exeption& exception) {
        std::cout << "Object creation failed: "
            << exception.get_error_message() << "\n";
    }
}

void test_schooler() {
    std::string name, surname, second_name, gender;
    double age;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter second name: ";
    std::cin >> second_name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter gender (male/female): ";
    std::cin >> gender;

    try {
        schooler test(name, surname, second_name, age, gender);
        std::cout << "You entered: " << test << "\n";
        std::cout << "Average income in monetary terms: "
            << test.average_income() << "\n";
    } catch (human_exeption& exception) {
        std::cout << "Object creation failed: "
            << exception.get_error_message() << "\n";
    }
}

void test_student() {
    std::string name, surname, second_name, gender;
    double age, salary;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter second name: ";
    std::cin >> second_name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter gender (male/female): ";
    std::cin >> gender;
    std::cout << "Enter salary: ";
    std::cin >> salary;

    try {
        student test(name, surname, second_name, age, gender, salary);
        std::cout << "You entered: " << test << "\n";
        std::cout << "Average income in monetary terms: "
            << test.average_income() << "\n";
    } catch (human_exeption& exception) {
        std::cout << "Object creation failed: "
            << exception.get_error_message() << "\n";
    }
}

void test_worker() {
    std::string name, surname, second_name, gender;
    double age, salary;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter second name: ";
    std::cin >> second_name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter gender (male/female): ";
    std::cin >> gender;
    std::cout << "Enter salary: ";
    std::cin >> salary;

    try {
        worker test(name, surname, second_name, age, gender, salary);
        std::cout << "You entered: " << test << "\n";
        std::cout << "Average income in monetary terms: "
            << test.average_income() << "\n";
    } catch (human_exeption& exception) {
        std::cout << "Object creation failed: "
            << exception.get_error_message() << "\n";
    }
}

int main() {
    setlocale(LC_ALL, "rus");

    int command;

    do {
        print_menu();
        std::cin >> command;
        std::cout << "\n";

        switch (command) {
        case 1:
            test_preschooler();
            break;
        case 2:
            test_schooler();
            break;
        case 3:
            test_student();
            break;
        case 4:
            test_worker();
            break;
        case 0:
            break;
        default:
            std::cout << "Wrong type!\n";
            break;
        }

        std::cout << "\n";
    } while (command != 0);


    return 0;
}
