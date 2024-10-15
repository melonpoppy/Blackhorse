#include "head.h"

int V() {
    int age;
    int weight;
    float height;
    string name;

    age = 21;
    weight = 56;
    height = 180.5;
    name = "小明";

    cout << "我是" << name << ",";
    cout << "今年" << age << "岁" << endl;
    cout << "身高" << weight << "cm,";
    cout << "体重" << height << "KG。" << endl;

    return 4;

}