#include "head.h"

int memory_free(){
    // 移除下标为0和5的两个元素
    int *pArr = new int[10];

    pArr[0] = 3;
    pArr[1] = 5;
    pArr[2] = 1;
    pArr[3] = 11;
    pArr[4] = 99;
    pArr[5] = 66;
    pArr[6] = 22;
    pArr[7] = 2;
    pArr[8] = 8;
    pArr[9] = 6;


    int *pNewArr = new int [8];

    int *count = new int;
    *count = 0;

    for(int i=0;i<10;i++){
        if(i==0 || i == 5){
            *count = *count + 1;
            continue;
        }
        pNewArr[i - *count] = pArr[i];

        // cout << pNewArr[i - *count] << "  " ; 
    }

    for(int i=0;i<8;i++){
        cout << pNewArr[i] << "  " ;
    }

    delete [] pArr;
    delete count;
    delete[] pNewArr;

    return 29;
}