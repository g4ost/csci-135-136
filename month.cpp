/*
Author: Stanley Gao
Course: CSCI-136
Instructor: Gwenael Gatto
Assignment: Lab 1
Write a program month.cpp that asks the user to input the year and the month 
(1-12) and prints the number of days in that month (taking into account leap years). 
You may not use switch case or arrays even if you know these language constructs.
getghetrehtrehdtrhtrnhjeyrryj
trjtrhjeryjeryghw4eyjren5yrne
gerhjsbvgwerkbvgkhgwjkrgnvsfb
ergjuhesoghweghlonwekllghwerlk
eruihlwbnsjkbswjkdbgvsdfkbj.n
*/

#include <iostream>

using namespace std;

int main() 
{
	cout << "Enter Year" << endl;

	int year = 0;

	cin >> year;
  
  cout << "Enter month" << endl;

	int month = 0;

	cin >> month;
  
  
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
