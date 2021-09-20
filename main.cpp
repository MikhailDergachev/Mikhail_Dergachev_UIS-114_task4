#include <iostream>
#include "student.h"
#include "schooler.h"
#include "preschooler.h"
#include "worker.h"

int main() {

    preschooler test1 = preschooler("Ivan","Kuznetsov","Alekseevich");
    std::cout << test1 << "\n";
    schooler test2 = schooler(12);
    std::cout << test2 << "\n";
    student test3 = student("male");
    std::cout << test3 << "\n";
    worker test4 = worker(28842);
    std::cout << test4 << "\n";
    return 0;
}