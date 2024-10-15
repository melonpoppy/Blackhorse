#include "head.h"

int array_iteration(){

    int a[] = {1,2,3,4,5,6,7,8,9,0};

    // 数组的遍历的高级写法
    // for(int temp : a){
    //     cout << temp << " " ;
    // }

    // char b[]={"helloworld"};

    // for(char temp : b){
    //     cout << temp ;
    // }

    string names[] = {"Landon","Avery","Kamden","Bentley","Finnegan","Nash","Emmett","Greyson","Noah","Jace","Jaxton","Sawyer","Zachary","Eli","Keegan","lincoln","Isaac","Asher","Declan","Theo","Levi","Dominic","Austin","Wyatt","Carter","Logan","Luke","Max","Ethan","Miles","Oliver","Hudson","Owen","William","Joshua","Benjamin","Henry","Lucas","Alexander","Jackson","Mason","Gray","Ryder","Elijah","Liam","Caleb","Thomas","Cooper","Hunter","Connor"};

    string seats[2][2][5];

    int num = 0;

    for(int i=0;i < sizeof(seats)/sizeof(seats[0]);i++){
        for(int j=0;j < sizeof(seats[0])/sizeof(seats[0][0]);j++){
            for(int k=0; k < sizeof(seats[0][0])/sizeof(seats[0][0][0]);k++){
                string major = i == 0 ? "物理" : "计算机";
                string class_names = j == 0 ? "一班" : "二班";
                int r[sizeof(seats)/sizeof(seats[0][0][0])];

                // for (int i : r){
                //     i = -1;
                // }
                for(int i=0 ; i < sizeof(r)/sizeof(r[0]);i++){
                    r[i] = -1;
                }


                int R = get_random_number(0,sizeof(names)/sizeof(names[0])-1);
                bool C ;
                for (int i=0;i < sizeof(r)-1;i++){
                    C =false;
                    if(R == r[i]){
                        C = true;
                        R = get_random_number(0,sizeof(names)/sizeof(names[0])-1);
                        i = 0;
                        continue;
                    }
                }
                r[num] = R;
                num++;
                if(C == false)
                seats[i][j][k] = names[R];
                cout << seats[i][j][k] << endl;
            }
        }
    }

    return 26;
}