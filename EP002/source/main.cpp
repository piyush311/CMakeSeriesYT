#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{
    return a+b;
}

int main(int argc, char** argv)
{
    if(argc != 3)
    {
	std::cerr << "Command line arrgument should be 2" << std::endl;
	return -1;
    }

    std::cout<<"Hellow World from c++20 with CMake on Linux/Windows"<<std::endl;
    std::cout<<"The Sum is: " << add(atoi(argv[1]), atoi(argv[2])) << std::endl;
    return 0;
}
