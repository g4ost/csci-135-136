/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 1

Asks the user to input two integer numbers and prints out the smaller of the two.
cout << " the small number" << second << endl;cout << " the small number" << sec
cout << " the small number" << second << endl;
cout << " the small number" << second << endl;
*/

#include <iostream>

using namespace std;

int main() 
{
	cout << "Enter First Number" << endl;

	int first = 0;

	cin >> first;
  	cout << "Enter second Number" << endl;

	int second = 0;

	cin >> second;
  
  	if (first > second)
	{
  	cout << " the small number" << second << endl;
	}
	else
	{
	cout << " the small number" << first << endl;
	}

}



