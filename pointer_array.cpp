#include "head.h"

int pointer_array(){

    int v1[] = {1,2,3,4,5,6,7,8,9,10};
    char v2[] = {'a','b','c','d','e'};

    int * p1 = v1;
    char * p2 =v2;

    for(int i=0;i<sizeof(v1)/sizeof(v1[0]);i++){
        cout << *(p1 + i) << "  " ;
    }

    cout << endl;

    for(int i=0;i<sizeof(v2)/sizeof(v2[0]);i++){
    cout << *(p2 + i) << "  " ;
    }


    return 27;
}