#include  "head.h"

int Cin() {

    int num;

    double num2;

    char c;

    string s;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter a decimal number: ";
    cin >> num2;

    cout << "Enter a character: ";
    cin >> c;

    cout << "Enter a string: ";
    cin >> s;

    cout << "输入的整数为：" << num << endl;
    cout << "输入的小数为：" << num2 << endl;
    cout << "输入的字符为：" << c << endl;
    cout << "输入的字符串为：" << s << endl;

    return 9;
}