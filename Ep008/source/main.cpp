#include <iostream>
#include "stats.hpp"
#include <vector>

int main()
{

    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "mean of vector: " << mean(v.data(), v.size());

    return 0;
}
