#include "head.h"

int AO() {
    int yue = 50;

    cout << "小明的余额：" << yue << "元。" <<endl;

    yue -= 5;

    cout << "购买冰淇淋花费5元，余额剩余：" << yue << "元。" <<endl;

    yue += 10;

    cout << "转卖冰淇淋得到10元，余额剩余：" << yue << "元。" <<endl;

    yue -= 2;

    cout << "购买彩票花费2元，余额剩余：" << yue << "元。" <<endl;

    yue *= 2;

    cout << "彩票中奖余额翻倍，余额剩余：" << yue << "元。" <<endl;

    return  10;

}