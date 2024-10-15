#include "head.h"

int logical() {

    int num = get_random_number(1,10);

    string color = get_random_number(0,1) ? "红色" : "黑色" ;

    string type;

    if (color == "红色") {
        type = get_random_number(0,1) ? "红桃" : "方片" ;
    }
    else {
        type =  get_random_number(0,1) ? "黑桃" : "梅花" ;
    }

    cout << type << num << endl;

    int guess_num;
    cout << "请输入猜测的数字：" ;
    cin >> guess_num;
    if (guess_num == num) {
        cout << "猜对了，请猜颜色：" ;
        string guess_color;
        cin >> guess_color;
        if (guess_color == color) {
            cout << "猜对了，请猜类型：" ;
            string guess_type;
            cin >> guess_type;
            if (guess_type == type) {
                cout << "猜对了，买彩票去吧。" << endl;
            }
            else {
                cout << "猜错类型，游戏结束。" << endl;
            }
        }
        else {
            cout << "猜错颜色，游戏结束" << endl;
        }
    }
    else {
        cout << "猜错数字，游戏结束" << endl;
    }

    return 14;
}