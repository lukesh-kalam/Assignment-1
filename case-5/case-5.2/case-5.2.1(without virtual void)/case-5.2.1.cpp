 /*
filename: 5.2.2cpp
details:order of contructor without virtual
author:K.Lukesh Kumar 
date:10/04/2020
*/

#include <iostream> 
using namespace std; 

// base class 
class Parent 
{ 
	public: 
	
	// Parent class constructor 
	Parent() 
	{ 
		cout << "Inside base class" << endl; 
	} 
	
	//Parent class destructor
	~Parent() 
	{ 
		cout << "Inside base class destructor" << endl; 
	} 
}; 

// Child class 
class Child : public Parent 
{ 
	public: 
	
	//Child class constructor 
	Child() 
	{ 
		cout << "Inside sub class" << endl; 
	} 
	
	//Child class destructor
	~Child() 
	{ 
		cout << "Inside sub class destructor " << endl; 
	} 
}; 

// main function 
int main() { 
	
	// creating object of sub class 
	Child obj; 
	
	return 0; 
} 

