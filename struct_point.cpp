#include "head.h"

int Struct_point(){

    struct Student
    {
        string name;
        int age;
        string gender;
    };

    struct Student std1 = {"王",21,"男"};
    struct Student *p =&std1;

    cout << "学生1的姓名：" << p->name << "，年龄：" << p->age << "，性别：" << p->gender << endl;


    struct Student *p2 = new Student;
    p2->name = "张";
    p2->age = 22;
    p2->gender = "女";
    cout << "学生2的姓名：" << p2->name << "，年龄：" << p2->age << "，性别：" << p2->gender << endl;

    delete p2;

    return 33;
}

int Struct_point_new(){

    struct Student
    {
        string name;
        int age;
        string gender;
    };

    struct Student  *p = new Student[5]; 

    cout << "录入学生信息" << endl;

    for(int i=0;i<5;i++){
        cout << "第" << i+1 << "位同学的姓名：" ;
        cin >> p[i].name;
        cout << "第" << i+1 << "位同学的年龄：" ;
        cin >> p[i].name;
        cout << "第" << i+1 << "位同学的性别：" ;
        cin >> p[i].gender;
    }

    cout <<endl;

    for(int i=0;i<5;i++){
        cout << "第" << i+1 << "位学生的姓名：" << p[i].name << "，年龄：" << p[i].age << "，性别：" << p[i].gender <<endl;
    }

    delete[] p;

    return 34;
}