#include "menu.h"
#include "/home/bar1k/Library/strophoid/include/strophoid.h"

int main() {
    int command;
    double a, x, y, phi;
    Prog2::Strophoid ptr;

    do {
        std::cout << "0. Exit" << std::endl;
        std::cout << "1. Set A" << std::endl;
        std::cout << "2. Get A" << std::endl;
        std::cout << "3. Function" << std::endl;
        std::cout << "4. Distance" << std::endl;
        std::cout << "5. Radius" << std::endl;
        std::cout << "6. Loop" << std::endl;
        std::cout << "7. Square" << std::endl;
        std::cout << "8. Volume" << std::endl;
        std::cout << "Enter the command: ->";
        getNum(command);
        switch(command) {
            case 0:
                std::cout << "EXIT!" << std::endl;
                break;
            case 1:
                getUnsignedNum("Enter A: ->", a);
                ptr.setA(a);
                break;
            case 2:
                std::cout << "A = " << ptr.getA() << std::endl;
                break;
            case 3:
                std::cout << "Enter x: ->";
                getNum(x);
                try {
                    y = ptr.function(x);
                    if (y == 0)
                        std::cout << "y = 0" << std::endl;
                    else {
                        std::cout << "y1 = +" << y << std::endl;
                        std::cout << "y2 = -" << y << std::endl;
                    }
                }
                catch (std::domain_error &de)
                {
                    std::cout << de.what() << std::endl;
                }
                break;
            case 4:
                std::cout << "Enter phi: ->";
                getNum(phi);
                std::cout << "Distance = " << ptr.distance(phi) << std::endl;
                break;
            case 5:
                std::cout << "Radius = " << ptr.radius() << std::endl;
                break;
            case 6:
                std::cout << "Loop = " << ptr.loop() << std::endl;
                break;
            case 7:
                std::cout << "Square = " << ptr.square() << std::endl;
                break;
            case 8:
                std::cout << "Volume = " << ptr.volume() << std::endl;
                break;
            default:
                std::cout << "ERROR! There is no such command." << std::endl;
        }
    } while (command != 0);

    return 0;
}