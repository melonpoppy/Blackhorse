#include "head.h"

int While_SUM(){
    int i,j,temp1,temp2,temp3;

    cout << "请输入需要累加的最小值：";
    cin >> i;
    cout << "请输入需要累加的最大值：";
    cin >>j;

    if(i>j){
        cout << "最小值大于最大值,已自动交换" <<endl;
        temp1 = i;
        i = j;
        j = temp1;
    }

    temp2 = i;
    temp3 = j;

    int SUM=0;

    while(i <= j){
        SUM +=i;
        i++;
    }

    cout << temp2 << "到" << temp3 << "的和为：" << SUM <<endl;

    return 17;
}