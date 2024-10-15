#include "head.h"

int IF() {

    int age;

    cout << "欢迎来到游乐场，未成年人免费，成年人收费" << endl;
    cout << "请输入您的年龄：" ;
    cin >> age;

    if (age < 18) {
        cout <<"您未成年，免费游玩，欢迎小朋友" << endl;
    }
    else {
        cout <<"您已成年，请购买门票" << endl;
    }

    cout << "祝您游玩愉快！！！" << endl;

    return 13;
}