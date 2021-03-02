#include "Figure.h"
#include <iostream>

int main() {
    Square a(10);
    std::cout << a.angles() << std::endl;
    std::cout << a.P() << std::endl;
    std::cout << a.S() << std::endl;
    Rectangle b(10, 20);
    std::cout << b.angles() << std::endl;
    std::cout << b.P() << std::endl;
    std::cout << b.S() << std::endl;
    Triangle c(3, 4, 5);
    std::cout << c.angles() << std::endl;
    std::cout << c.P() << std::endl;
    std::cout << c.S() << std::endl;
    Circle d(10);
    std::cout << d.angles() << std::endl;
    std::cout << d.P() << std::endl;
    std::cout << d.S() << std::endl;
    Ellipse e(5, 4);
    std::cout << e.angles() << std::endl;
    std::cout << e.P() << std::endl;
    std::cout << e.S() << std::endl;
    return 0;
}
