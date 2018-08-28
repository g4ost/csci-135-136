/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 1

Write a program leap.cpp that asks the user to input an integer representing a year number 
(1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, 
it should print Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, 
but century years are not leap years unless they are divisible by 400. Here is the pseudocode:
*/

#include <iostream>

using namespace std;

int main() 
{
	cout << "Enter Year" << endl;

	int year = 0;

	cin >> year;
  
	if (year % 4 != 0)
  	{
    		cout << "Common year" << endl;
  	}
	else if (year % 100 != 0)
  	{
    		cout << "Leap year" << endl;
	}	
  	else if (year % 400 != 0)
  	{
    		cout << "Common Year" << endl;
  	}
	else
  	{
    		cout << "Leap year" << endl;
  	}
	
}
  
