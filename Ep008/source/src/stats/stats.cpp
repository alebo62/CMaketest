#include "supermath.hpp"

double mean(int* value, int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum = add(sum, *(value + i));
    }
    return (double)sum / count;
}