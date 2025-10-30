//
// Created by SURAJ on 30-10-2025.
//

#include "../include/example.h"
#include <iostream>

Example :: Example()
{
    std::cout << "Example object created!" << std::endl;
}

void Example::greet(const std::string& name) const
{
    std::cout << name << std::endl;
}
