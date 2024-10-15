#include "head.h"

int love(){

    int i = 1,day=0;

    while(day < 30){
        day++;

        cout << "小明给小美送花的第" << day << "天" << endl;

        if(i == get_random_number(1,10)){
            cout << "小美生气了，一切都结束了。" << endl;
            break;
        }

        if(i == get_random_number(1,2)){
            cout << "小美今天有点不高兴，今天算了，明天再来。" << endl;
            continue;
        }
        else{
            cout << "小美好像有点开心，小明表白了，还邀请小美去看电影" << endl;
        }

    }

    return 23;
}