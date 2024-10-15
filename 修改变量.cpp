#include "head.h"

int changeV() {
    int yue=50;
    int cost;
    bool B;

    cout << "小明的余额：" << yue << "元。" << endl;

    cout << "小明遇见一个冰淇淋摊，要买冰淇淋吗？(0不买，1买)" <<endl;
    cin >> B;

    if(B == 1)
    {
        yue -= 5;
        cout << "购买冰淇淋花费5元，余额剩余：" << yue << "元。" << endl;
    }
    else
        cout << "小明没有买冰淇淋，余额为：" << yue << "元。" << endl;
    
    if(B == 1)
    {
        cout << "现在有人愿意花十块钱买下小明手中的冰淇淋，要卖吗？(0不卖，1卖)" << endl;
        cin >> B;
        if(B == 1)
        {
            yue += 10;
            cout << "转卖冰淇淋得到10元，余额剩余：" << yue << "元。" << endl;
        }
        else
            cout << "小明没有卖掉手中的冰淇淋。" << endl;
    }

    cout << "小明遇见一个彩票摊，要买彩票吗？(0不买，1买)" <<endl;
    cin >> B;

    if(B == 1)
    {
        yue=yue-2;
        cout << "购买彩票花费2元，余额剩余：" << yue << "元。" << endl;

        yue=yue*2;

        cout << "彩票中奖余额翻倍，余额剩余：" << yue << "元。" << endl;
    }
    else
        cout << "小明没有买彩票。" << endl;


    cout << "小明的一天结束了。" << endl << endl ;
    return 5;
}