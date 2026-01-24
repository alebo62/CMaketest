#include <iostream>
#include "dog.hpp"
#include "operations.hpp"

int main(){
Dog dog1((std::string)"Mike");
dog1.print_info();
std::cout << add(2, 6) << std::endl;
return 0;
}
