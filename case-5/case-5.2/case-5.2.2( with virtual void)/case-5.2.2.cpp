 /*
filename: 5.2.2cpp
details:order of contructor with virtual function
author:K.Lukesh Kumar 
date:10/04/2020
*/
#include<iostream> 
using namespace std; 

class Parent
{ 
public: 
	Parent() 
	{ 
		cout<< "Parent class Constructor called" <<endl; 
		fun() ; 
	} 

	~Parent() 
	{ 
		fun(); 
	} 

	virtual void fun() 
	{ 
		cout<< "Virtual method called" <<endl; 
	} 

	void enjoy() 
	{ 
		fun(); 
	} 
}; 

class child : public Parent 
{ 
public: 
		child() 
		{ 
			cout<< "child class Constructor called" <<endl; 
		} 
		void fun() 
		{ 
			cout<< "child class Virtual method called" <<endl; 
		} 
}; 

int main() 
{ 
	child d; 
	d.enjoy(); 
} 

