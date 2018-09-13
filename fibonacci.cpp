#include <iostream>
using namespace std;4
//dfd
//dfdfd
///fddfdf
//dfdfdfdf
//dfddfd
//dsdsd
//sdsfddf
//sdsfdsf
//sdfssdfsf


int main() {
    int fib[60];
    int i=0; int j=0;

    while (i<60) {
        fib[i] = i;
        i++;
    };

    while (j<60) {
        int minusone = j - 1;
        int minustwo = j - 2;

        if (j<=1)
            cout << fib[j] << endl;

        else {
            fib[j] = fib[minustwo] + fib[minusone]; 
            cout << fib[j] << endl;

        }

               
        j++;
    };

    return 0;
}
