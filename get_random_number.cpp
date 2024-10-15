#include "head.h"
#include "random"

int get_random_number(int min, int max) {

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dis(min, max);

    return dis(gen);
}