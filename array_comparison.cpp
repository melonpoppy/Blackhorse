#include "head.h"

int array_comp(){

    int a[10],b[10];
    int count=0;
    
    cout << "请输入1-10范围内10个数字：" <<endl;

    for(int i=0;i<10;i++){
        cout << "请输入第" << i+1 << "个数字：" ;
        cin >> a[i];
    }

    for(int i=0;i<10;i++){
        b[i] = get_random_number(1,10);
    }

    for(int i=0;i<10;i++){
        for (int j =0;j<10;j++){
            if(a[i] == b[j]){
                count++;
            }
        }
    }

    cout << "你猜对了" << count << "次" << endl ;

    for(int i=0;i<10;i++){
        cout << a[i] << " " ;
    }

    cout <<endl;

        for(int i=0;i<10;i++){
        cout << b[i] << " " ;
    }


    return 25; 

}