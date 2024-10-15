#include "head.h"

int new_delete(){

    int *p =new int[10];

    for(int i=0;i<10;i++){
    p[i] = i;
    }

    for(int i=0;i<10;i++){
        cout << "p的第" << i+1 << "个元素的值为：" << *(p+i) << endl;
    }

    delete[] p;

    return 28;
}