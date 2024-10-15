#include "head.h"

int Switch() {

    //输入1-7，输出星期几
    int num;
    cout << "请选择直播场景，输入对应的场景代码数字。" << endl;
    cout << "1仅输出屏幕，2输出屏幕+摄像头画面，3仅输出摄像头" << endl;
    cin >> num;

    switch (num) {

        case 1:
            cout << "已经切换到场景1，用户只能看到屏幕画面。" << endl;
            break;
        case 2:
            cout << "已经切换到场景2，用户可看到屏幕和摄像头画面。" << endl;
            break;
        case 3:
            cout << "已经切换到场景3，用户仅可看到摄像头画面。" << endl;
            break;
        default:
            cout <<"您输入的代码有误，无法识别具体场景" << endl;
    }

    return 15;
}