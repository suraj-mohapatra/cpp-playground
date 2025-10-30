#include <iostream>

#include "example.h"


void foo();

int main() {
    const auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    foo();


    Example example;

    return 0;
}

void foo() {
    std::cout << "foo() called" << std::endl;
}