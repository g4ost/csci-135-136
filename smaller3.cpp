
/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 1
Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given numbers x, y, and z, you can first compare x and y, take whichever is smaller and compare it with z.)
uifgwbgnerhtge
Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, but century years are not leap years unless they are divisible by 400. Here is the pseudocode:
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
  
 	cout << "Enter third Number" << endl;

	int third = 0;

	cin >> third;
  
	if (first < second & first < third)
  	{
		cout << " the small number" << first << endl;
  	}
	else if (second < first & second < third)
	{
	  	cout << " the small number" << second << endl;
	}
  	else
  	{
    		cout << " the small number" << third << endl;
  	}

}


