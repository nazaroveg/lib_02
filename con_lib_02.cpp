// con_lib_02.cpp :

#include "Leaver.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    std::string name;
    std::cout << "Введите имя:\n";
    std::cin >> name;
    Leaver::Leaver names;

    std::cout << names.setleave(name);
    return 0;
}


