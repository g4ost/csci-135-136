//Stanley Gao
//Cs136
//Lab 2
//Task C
// this lets you edit an array
#include <iostream>
using namespace std;

int main() {
	
	// Sets all the variables needed
    int myData[10];
    int index = 1;
    int value;
    
	// Creates the initial value of the array
    for(int i=0; i<10; i++) 
        myData[i] = 1;
  
    // Loop until user picks an invalid index input to change
    while(index >= 0 && index < 10) {
    	
    	for(int i=0; i<10; i++)
    		cout << myData[i] << " ";
    		
    	cout << endl << endl;
    
    	cout << "Input Index: ";
    	cin >> index;
    	cout << "Input Value: ";
    	cin >> value;
    	
    	cout << endl << endl;
    	
    	for(int j=0; j<10; j++)
    		if (index==j)
    			myData[j] = value;
    	
    
	}
	
	
	cout << "Index Out of Range. Exiting...." << endl;
	
    return 0;
}
