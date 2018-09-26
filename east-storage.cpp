//Stanley Gao
//CS135
//Lab 3
//Task A
/*Write a program east-storage.cpp 
that asks the user to input a string representing the date 
(in MM/DD/YYYY format), and prints out the East basin storage on that day.
//DSsdfdsfs
//sdfsssdsfsf/
//dfgddgdgdfgd
///feregerge
//eredrgeergegeg
//ergeegerer//Stanley Gao
//Lab 3
//Task A


#include <iostream> // includes the file iostream
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std; // indicates that we are using the standard names

int main() 
{
	
		
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) 
	{
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1); // exit if failed to open the file
	}

	
	string junk;        // new string variable
	getline(fin, junk); // read one line from the file 
	
	string date;
	string ate;
	double eastSt, eastEl, westSt, westEl;
	cout << "gimme date";
	cin >> ate;
	while(fin >> date >> eastSt >> eastEl  >> westSt >> westEl)
	{
		if (ate == date)
		{
			cout << eastSt << endl;
		}
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
	}
    // for example, to print the date and East basin storage:

	
	fin.close();
	
}
