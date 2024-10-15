#include "head.h"

int select_sort(){

    int * pArr = new int[10];
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

    cout << "排序前的数组为：" ;
    for(int i=0;i<10;i++){
        cout << pArr[i] << "  " ;
    }
    cout <<endl;

    for(int i=0;i < 9 ;i++){

        int j=i;
        int max_index = j;
        int max = pArr[j];
        
        for(;j<10;j++){
            if(max < pArr[j]){
                max = pArr[j];
                max_index = j;
            }
        }
        int tmp = pArr[i];
        pArr[i] = max;
        pArr[max_index] = tmp;
    }

        cout << "排序后的数组为：" ;
    for(int i=0;i<10;i++){
        cout << pArr[i] << "  " ;
    }


    return 30;
}