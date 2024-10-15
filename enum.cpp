#include "head.h"

int Enum() {

    enum Color {
        Red,
        Yellow,
        Blue,
    };

    int i;
    cout << "请输入你喜欢的颜色，0红、1黄、2蓝:";
    cin >> i;

    switch (i) {
        case Red:
            cout <<"你喜欢的颜色是红色" << endl;
            break;
        case Yellow:
            cout <<"你喜欢的颜色是黄色" << endl;
            break;
        case Blue:
            cout <<"你喜欢的颜色是蓝色" << endl;
            break;
        default:
            cout <<"输入的颜色有误，无法判断" << endl;
    }

    return 16;
}