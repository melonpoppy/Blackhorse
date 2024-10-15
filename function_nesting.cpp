#include "head.h"

int compare_min(int a,int b){

    if(a >= b){
        return b;
    }
    else{
        return a;
    }
}

int compare_max(int a,int b){

    if(a <= b){
        return b;
    }
    else{
        return a;
    }
}

struct max_min MAX_MIN(int max,int min){

    // if(min > max){
    //     int tmp = max;
    //     max = min;
    //     min = tmp;
    // }

    struct max_min Result1 = {max,min};

    // cout << "max = " << Result1.max << ", min = " << Result1.min ;

    return Result1;
}