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
    case 4:
        V();
    
    default:
        break;
    }
}