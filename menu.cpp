//
// Created by bar1k on 22.09.2021.
//

#include "menu.h"

int getUnsignedNum(const char *msg, double &a) {
    const char *pr = "";
    do {
        std::cout << pr << std::endl;
        std::cout << msg;
        pr = "You are wrong! Repeat again please!";
        if (getNum(a) < 0)
            return 1;
    } while (a < 0);
    return 0;
}