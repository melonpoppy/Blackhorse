#include "head.h"

void main_menu()
{
    int choose;

    cout << "--------练手随笔--------" <<endl;
    cout << "请选择功能：" <<endl<<endl;
    cout << "1.将输入的字符输出。" << endl;
    cout << "2.输出几个字面常量。" << endl;
    cout << "3.定义并输出几个符号常量" << endl;
    cout << "4.定义不同的变量。" << endl;
    cout << "5.查看小明是怎么花钱的。" <<endl;
    cout << "6.查看每种变量所需占的字节数。" <<endl;
    cout << "" <<endl;

    cout << endl;
    cout << "请输入你的选择：" ;
    cin >> choose;
    cout << endl;

    switch (choose)
    {
    case 1:
        cppout();
        break;
    case 2:
        LC();
        break;
    case 3:
        SC();
        break;
    case 4:
        V();
        break;
    case 5:
        changeV();
        break;
    case 6:
        size();
        break;
    
    default:
        break;
    }
}