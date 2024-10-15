#define SIZE 1024

#include "head.h"

int size() {

    short a=1;

    int b = 2;

    long c = 3;

    long long d = 4;

    cout << a << " "<< b << " "<< c << " "<< d << " "<< endl;

    cout << "short类型变量占用的字节数：" << sizeof(a) << endl;
    cout << "int类型变量占用的字节数：" << sizeof(b) << endl;
    cout << "long类型变量占用的字节数：" << sizeof(c) << endl;
    cout << "long long类型变量占用的字节数：" << sizeof(d) << endl;
    cout << "常量变量占用的字节数：" << sizeof(SIZE) << endl;

    return 6;
}
