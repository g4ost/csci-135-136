//Stanley Gao
//CS135
//PROJECT 1
//Task c
//DSsdfdsfs
//sdfsssdsfsf/
//dfgddgdgdfgd
///feregerge
//eredrgeergegeg
//ergeegerer
//regegegegergeg
///rreggerg

#include <iostream>
using namespace std;

int main() {

    int outcome=0;
    int sum = 0;
    int difference = 0;
    char op = ' ';
    char a = '+';
    char b = '-';
    char c = ';';
    cin>>outcome;
    while(cin>>op) {
        if((op==a || op ==b)) {
            if(op==a) {
                cin>>sum;
                outcome=outcome+sum;
            }
            else if(op==b) {
                cin>>difference;
                outcome=outcome-difference;
            }

            else {
             cout<<"Operator not Support" << endl;
            }
        
        }

        else if(op==c) {
            cout << outcome << endl;
            cin >> outcome;
        }

    



    }

    


    return 0;
}
