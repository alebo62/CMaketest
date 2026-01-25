#include <iostream>
#include "dog.hpp"
#include "operations.hpp"
#include "log.hpp"

int main(){

std::cout << add(20, 6) << std::endl;

Dog dog1((std::string)"Mike");
dog1.print_info();



log_data("Message", LogType::FATAL_ERR);

return 0;
}
