/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 2
Write a program print-interval.cpp 
that asks the user to input 
two integers L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces.
Notice that we include the lower limit, but exclude the upper limit.
ki7umynthbgrvfecdwxs
btgrvfecdwxsnyhtbgrvfd
nhtbgrvfcedmjnyhbtgvrfced
nuybtgvrfcednyhbtgvr
nyhbtgvrfcednuybtgv
munyhbtvrcmujnyhbtgvr
jnyhbtgvrfcemkujnyhbtg
mujnyhbtgvrfcnujy
hbtnujyhbtgvrf
*/
#include <iostream>

using namespace std;

int main() 
{
    int L = 0;
    int U = 0;

    cout << "enter L" << endl;
    cin >> L;
    
    cout << "enter U" << endl;
    cin >> U;
    
    for (int i=L; i < U; i++)
    {
        cout << i << endl;
    }


}
