#include "log.hpp"
#include <iostream>

void log_data(const char* msg, LogType type){
    auto value = ((10 <=> 20) > 0);
    std::cout << msg << ": ";
    switch (type){
        case LogType::MESSAGE:
            std::cout << "MESSAGE";
            break;
        case LogType::WARNING:
            std::cout << "WARNING";
            break;
        case LogType::FATAL_ERR:
            std::cout << "FATAL_ERR";
            break;
    }
    std::cout << std::endl;  
}