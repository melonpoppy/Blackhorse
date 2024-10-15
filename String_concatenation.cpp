#include "head.h"

int String_C() {
    string name = "melon波比";
    string major = "CS";

    int age = 21;

    double height =168.5;

    string msg = "我的名字是：" + name + "，我的专业是：" + major + "，我的年龄是：" + to_string(age) + "，我的身高是：" + to_string(height) + "。";

    cout << msg << endl;

    return 8;
}