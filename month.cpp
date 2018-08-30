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
wzexrdctfvygbuhni
zsexdchfgj hkjlkml
sxrdctfvygbhjnjml
rxdctfvygbhnjml
rxdtcfyvgubhinjmlk
tdxcfyvgbjhknjlm
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
  	
	int jan  = 31;
	int feb1 = 28;
	int feb2 = 29;
	int mar  = 31;
	int apr  = 30;
	int may  = 31;
	int jun  = 30;
	int jul  = 31;
	int aug  = 31;
	int sep  = 30;
	int oct  = 31;
	int nov  = 30;
	int dec  = 31;
	
	if (year % 4 != 0)
  	{
    		if (month = 1)
			cout << jan << " days" << endl;
		else if (month = 2)
			cout << feb1 << endl;
		else if (month = 3)
			cout << mar << endl;
		else if (month = 4)
			cout << apr << endl;
		else if (month = 5)
			cout << may << endl;
		else if (month = 6)
			cout << jun << endl;
		else if (month = 7)
			cout << jul << endl;
		else if (month = 8)
			cout << aug << endl;
		else if (month = 9)
			cout << sep << endl;
		else if (month = 10)
			cout << oct << endl;
		else if (month = 11)
			cout << nov << endl;
		else
			cout << dec << endl;	
  	}
	
	else if (year % 100 != 0)
  	{
    		if (month = 1)
			cout << jan << " days" << endl;
		else if (month = 2)
			cout << feb2 << endl;
		else if (month = 3)
			cout << mar << endl;
		else if (month = 4)
			cout << apr << endl;
		else if (month = 5)
			cout << may << endl;
		else if (month = 6)
			cout << jun << endl;
		else if (month = 7)
			cout << jul << endl;
		else if (month = 8)
			cout << aug << endl;
		else if (month = 9)
			cout << sep << endl;
		else if (month = 10)
			cout << oct << endl;
		else if (month = 11)
			cout << nov << endl;
		else
			cout << dec << endl;
	}
		
	else if (year % 400 != 0)
  	{
    		if (month = 1)
			cout << jan << " days" << endl;
		else if (month = 2)
			cout << feb1 << endl;
		else if (month = 3)
			cout << mar << endl;
		else if (month = 4)
			cout << apr << endl;
		else if (month = 5)
			cout << may << endl;
		else if (month = 6)
			cout << jun << endl;
		else if (month = 7)
			cout << jul << endl;
		else if (month = 8)
			cout << aug << endl;
		else if (month = 9)
			cout << sep << endl;
		else if (month = 10)
			cout << oct << endl;
		else if (month = 11)
			cout << nov << endl;
		else
			cout << dec << endl;
  	}
	else
  	{
    		if (month = 1)
			cout << jan << " days" << endl;
		else if (month = 2)
			cout << feb2 << endl;
		else if (month = 3)
			cout << mar << endl;
		else if (month = 4)
			cout << apr << endl;
		else if (month = 5)
			cout << may << endl;
		else if (month = 6)
			cout << jun << endl;
		else if (month = 7)
			cout << jul << endl;
		else if (month = 8)
			cout << aug << endl;
		else if (month = 9)
			cout << sep << endl;
		else if (month = 10)
			cout << oct << endl;
		else if (month = 11)
			cout << nov << endl;
		else
			cout << dec << endl;
  	}

	}
