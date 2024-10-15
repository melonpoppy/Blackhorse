#include "head.h"

int bank_menu(){
    string name;
    int choose;
    int Balance = 500000;
    bool exit = false;

    cout << "请输入您的姓名：" ;
    cin >> name;

    while(1){
        cout << "----------主菜单----------" <<endl;
        cout << name << "，您好，欢迎来到ATM。请选择操作：" <<endl;
        cout << "查询余额 \t【输入1】" << endl;
        cout << "存款 \t\t【输入2】" << endl;
        cout << "取款 \t\t【输入3】" << endl;
        cout << "退出 \t\t【输入4】" << endl;
        cout << "请输入您的选择：" ;
        cin >> choose;
        cout << endl;

        switch (choose)
        {
        case 1:
            Balance_check(Balance,name);
            break;
        case 2:
            Balance_in(&Balance,name);
            break;
        case 3:
            Balance_out(&Balance,name);
            break;
        case 4:
            cout << "用户选择退出，程序已退出。" <<endl;
            exit = true;
            break;
        default:
            cout << "用户输入错误，程序已退出。" <<endl;
            exit = true;
            break;
        }

        if(exit == true)
            break;
    }

    return 33;
}

int Balance_check(int Balance,string name){
    cout << name << "，您的余额为：" << Balance << endl << endl;
    return 34;
}

int Balance_in(int *p,string name){
    int in;
    cout << "请输入您要存入的金额：" ;
    cin >> in;
    if(in <= 0){
        cout << "您输入的金额有误。" << endl << endl ;
        return 35;
    }
    *p += in;
    cout << name << "，您存款" << in << "元成功，当前余额为：" << *p << endl << endl;
    return 35;
}

int Balance_out(int *p,string name){
    int out;
    cout << "请输入您要取出的金额：" ;
    cin >> out;
    if(out > *p){
        cout << "余额不足，无法取出。" << endl << endl;
        return 36;
    }
        if(out <= 0){
        cout << "您输入的金额有误。" << endl << endl ;
        return 35;
    }
    *p -= out;
    cout << name << "，您取款" << out << "元成功，当前余额为：" << *p << endl << endl;
    return 36;
}