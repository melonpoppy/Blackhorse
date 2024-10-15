#include "head.h"

int V() {
    int age;
    int weight;
    float height;
    string name;

    // 原视频的定义，人为修改为输入
    // age = 21;
    // weight = 56;
    // height = 180.5;
    // name = "小明";

    cout << "请输入姓名：" ;
    cin >> name;
    cout << "请输入年龄：" ;
    cin >> age;
    cout << "请输入身高：" ;
    cin >> height;
    cout << "请输入体重：" ;
    cin >> weight;

    cout << "我是" << name << ",";
    cout << "今年" << age << "岁" << endl;
    cout << "身高" << weight << "cm,";
    cout << "体重" << height << "KG。" << endl;

    return 4;

}