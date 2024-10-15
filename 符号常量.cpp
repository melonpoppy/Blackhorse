 #include "head.h"

#define NAME "周杰伦"
#define AGE 21
#define HEIGHT 180.5
#define WIDTH 56

int SC() {

    cout << "在此函数中定义了四个符号常量："<<endl;
    cout << "#define NAME \"周杰伦\"" << endl;
    cout << "#define AGE 21" << endl;
    cout << "#define HEIGHT 180.5" << endl;
    cout << "#define WIDTH 56" << endl << endl;
    cout << "调用其组成句子效果如下：" << endl;
    cout << "我是" << NAME << ",今年" << AGE << "岁。" << endl << "身高" << HEIGHT << "cm,体重" << WIDTH << "KG。" <<endl;
    return 3;
}