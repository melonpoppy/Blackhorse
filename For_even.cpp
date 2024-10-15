#include "head.h"

int For_even(){

    int SUM=0;

    for(int i =1;i<=100;i++){
        if (i%2==0)
        {
            SUM +=i;
        }
        
    }

    cout << "0-100中偶数和为：" << SUM <<endl;

    return 21;

}