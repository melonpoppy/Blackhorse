#include "head.h"

int salary(){

    int bank = 10000;

    for (int man =1;man<=20;man++){
        int performance = get_random_number(1,10);


        if (performance < 5){

            cout << "员工" << man << ",绩效分" << performance << ","<< "低于5，不发工资，下一位。" << endl;

            continue;
        }
        else{

            bank -=1000;

            cout << "向员工" << man << "发放工资1000元，账户余额还剩余" << bank <<"元。" << endl;
        }

        if(bank == 0){
            cout << "工资发完了，下个月领取吧。" << endl ;
            break;
        }

    }

    return 24;
}