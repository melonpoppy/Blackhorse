#include "head.h"

void int_arr_sort(int arr[],int length){

    for(int i=0;i<length;i++){
        for(int j=i;j<length;j++){
            if(arr[i]>arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp ;
            }
        }
    }

    cout << "排序后：\t";

    for(int i=0;i<10;i++){
        cout << arr[i] << " " ;
    }

    delete[] arr;

    cout << endl;
    
}

int * get_random_int_arr(){
    int *arr = new int[10];
    int length = 10;
    for(int i=0;i<10;i++){
        arr[i] = get_random_number(1,100);
    }

    cout << "随机整形数组为\t";

    for(int i=0;i<10;i++){
        cout << arr[i] << " " ;
    }

    cout <<endl;

    return arr;
}