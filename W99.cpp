#include "head.h"

int W_nine_nine(){
    int i=1;
    
    while(i<10) {
        int j =1;
        while(j<=i) {
            cout << j << "*" << i << "=" << i*j << "\t" ;
            j++;
        }
        cout << endl;
        i++;
    }

    return 20;
}