#include "head.h"

int While_guess(){

    int i = get_random_number(1,100);
    int count=1;
    int j;

    cout << "请你猜数字（1-100）:"; 

    while(1){

        cin >>j;

        if(i == j){
            cout << "恭喜你猜对了" <<endl;
            break;
        }

        if(i > j){
            cout << "猜小了，请再猜一次：" ;
        }

        if(i < j){
            cout <<"猜大了，请再猜一次：" ;
        }

        count++;

    }

    cout << "你一共猜了" << count << "次。" <<endl;

    return 18;
}