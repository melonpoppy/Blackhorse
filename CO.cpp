#include "head.h"
#include "cstring"

int CO() {

    int num1 = 3;
    int num2 = 4;

    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    bool r1 = num1 == num2;

    bool r2 = num1 != num2;

    cout << "num1 = num2 ? :" << r1 << endl;
    cout << "num1 != num2 ? :" << r2 << endl;

    cout << "3 < 5 ? :" << (3 < 5) << endl;
    cout << "3 == 5 ? :" << (3 == 5) << endl;
    cout << "3 >= 5 ? :" << (3 >= 5) << endl;

    char s1[] = "hello";
    char s2[] = "hello";

    cout << "char s1[] = \"hello\";" << endl;
    cout << "char s2[] = \"hello\";" << endl;

    // cout << "s1 = s2 ? :" << (s1 == s2) << endl;

    cout << "s2 = s1 ?(使用strcmp比较) :" << strcmp(s1,s2) << endl;

    string s3 = "hello";
    char s4[] = "hello";

    cout << "string s3 = \"hello\";" << endl;
    cout << "char s4[] = \"hello\";" << endl;

    cout << "s3 = s4 ? :" << (s3 == s4) << endl;


    return 11;

}
