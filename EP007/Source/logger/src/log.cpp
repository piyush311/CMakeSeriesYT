#include "log.h"
#include <iostream>

void log_data(const char* message, LogType lt)
{
    auto value  = ((10 <=> 20) > 0);
    std::cout<< std::boolalpha;
    std::cout<<"Value: " << value << std::endl;

    switch (lt)
    {
    case LogType::MESSAGE:
        std::cout << "Message : " << message << std::endl;
        break;
    case LogType::WARNING:
        std::cout << "Warning : " << message << std::endl;
        break;
    case LogType::FATAL_ERROR:
        std::cout << "Fatal Error : " << message << std::endl;
        break;
    
    default:
        break;
    }
}