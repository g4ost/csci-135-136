/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 2
Write a program valid.cpp, 
which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, 
the program should keep asking to re-enter until a valid number is input.
arhwaevxtdcfyvuhj
xdxtcfyvubidxfcgvhbjn
fsdxgchvjbkjdxgfchvjbkjn
xdgfchvbjnfdxgfcvjhkbnml
rzdxgfchvjbknldxgfchvjbkjn
dxgfchvjbknlkgxfchvjbknlm
fxdgfchvjbknlfdxgchvb
xgdfchvjbknlgxdfchvjbk5

After a valid value is obtained, print this number n squared.
*/
#include <iostream>

using namespace std;

int main() 
{
    int number = 0;
    int num = 0;
    cout << "gimme number" << endl;
    cin >> number;
  
    while ( number <= 0 || number >= 100 )
    {
        cout << "Please re-enter: " << endl;      
		cin >> number; 
    }
    
    if ( number > 0 && number < 100 )
    {
        num = number * number;
        cout << "Number squared is: " << num << endl;
    }
    
}
  
    
  
  
