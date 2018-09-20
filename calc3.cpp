//Stanley Gao
//Project 1
//Task D
//2323
//dfdfdd
//dfgdgdf
//dfgdgdgd
//dfgfdgdg
//dfgdgdg
//dfggdff
//ffghgf
//gfhfhfhfghf

#include <iostream>
using namespace std;
int main() {
    int ifilnum, totl = 0;
    char oprtr, oprtrb4 = '+';

    cin >> ifilnum;

    while (cin >> oprtr) {
        if (oprtr == '^')                                    //checks for '^' in 1st number
        {
            ifilnum = ifilnum * ifilnum;
            cin >> oprtr;
        }

        switch (oprtrb4) {
            case '-':
                totl = totl - ifilnum;                //evaluates for numbers with or without '^'
                break;

            case '+':
                totl = totl + ifilnum;
                break;
        }

        oprtrb4 = oprtr;                                //reads in numbers one by one
        cin >> ifilnum;

        if (oprtrb4 == ';') {
            cout << totl << endl;
            totl = 0;                    //sets sum to zero to start reading next line
            oprtrb4 = '+';
        }
    }
    return 0;

}
