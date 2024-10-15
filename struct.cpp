#include "head.h"

int Struct(){

    struct Student
    {
        string name;
        int age;
        string address;
    };

    const int MAX_STUDENTS = 5;
    struct Student Students[MAX_STUDENTS];

    for(int i=0 ;i < MAX_STUDENTS;i++){
        cout << "请输入第" << i+1 << "个学生的姓名：" ;
        cin >> Students[i].name;

        cout << "请输入第" << i+1 << "个学生的年龄：" ;
        cin >> Students[i].age;

        cout << "请输入第" << i+1 << "个学生的地址：" ;
        cin >> Students[i].address;
        cout << endl;
    }

    cout << "学生信息：" << endl;
    for(int i=0 ;i<MAX_STUDENTS;i++){
        cout << "学生" << i+1 << "姓名：" << Students[i].name << "，年龄：" << Students[i].age << "，地址：" << Students[i].address << "。" << endl;
    }
    
    return 31;
}

int Struct_default(){

    struct Student
    {
        string name;
        //C++11标准，导入会报错，所以不用的时候不导入
        // int age = 11;
        string address;
    };

    const int MAX_STUDENT = 5;

    struct Student stu[MAX_STUDENT];

    for(int i=0;i<MAX_STUDENT;i++){
        cout << "请输入第" << i+1 << "个学生的姓名：" ;
        cin >> stu[i].name;

        cout << "请输入第" << i+1 << "个学生的地址：" ;
        cin >> stu[i].address;
        cout << endl;
    }
    
    cout << "学生信息：" << endl;
    for(int i=0 ;i<MAX_STUDENT;i++){
        cout << "学生" << i+1 << "姓名：" << stu[i].name << "，地址：" << stu[i].address << "。" << endl;
        // cout << "学生" << i+1 << "姓名：" << stu[i].name << "，年龄：" << stu[i].age << "，地址：" << stu[i].address << "。" << endl;
    }

    return 32;
}