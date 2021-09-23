//
// Created by bar1k on 22.09.2021.
//

#ifndef PROG2_MENU_H
#define PROG2_MENU_H
#include <iostream>
#include <limits>

template <class T>
int getNum(T &a) {
    while (true) {
        std::cin >> a;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "ERROR! Invalid data! Try again please: ->";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 1;
        }
    }
}

int getUnsignedNum(const char *msg, double &a);

#endif //PROG2_MENU_H
