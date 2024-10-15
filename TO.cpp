#include "head.h"

int TO() {

    int num1, num2;

    cout << "请输入小明第一次的考试成绩（0-100）：" ;
    cin >> num1;

    cout << "请输入小明第二次的考试成绩（0-100）：" ;
    cin >> num2;

    string end = num1 < num2 ? "对小明的成绩进行判断，结果是：买糖" : "对小明的成绩进行判断，结果是：不买糖" ;

    cout << end ;

    return 12;

}