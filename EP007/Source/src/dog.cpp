#include "dog.h"
#include <iostream>

Dog::Dog(std::string name_param) : dog_name(name_param)
{
    std::cout << "Constructor for dog " << dog_name << "Called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for dog " << dog_name << "Called" << std::endl;
}