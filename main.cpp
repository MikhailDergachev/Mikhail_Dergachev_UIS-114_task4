#include <iostream>
#include "human.h"
int main() {

    preschooler test1 = preschooler("Ivan","Kuznetsov","Alekseevich",12,"male",100);
    std::cout << test1 << "\n";
    schooler test1 = schooler("Marina","Kuznetsova","Alekseevna",15,"female",1242);
    std::cout << test1 << "\n";
    worker test1 = worker("Mike","Volkov","Pavlovich",22,"male",777);
    std::cout << test1 << "\n";
    return 0;
}