#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    std::cout<<"Hellow World from c++20 with CMake on Linux/Windows"<<std::endl;
    std::cout<<"The Sum is: " << add(7, 5) << std::endl;
    return 0;
}