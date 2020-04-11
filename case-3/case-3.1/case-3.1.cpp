/*
filename: 3-1.cpp
details:To find the difference between local and global
author:K.Lukesh Kumar 
date:09/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

// global variable 
int G=45; 

// variable accessed from 
void acces() 
{ 
   int G=50;
	cout<<"local value :- "<<G<<endl; 		//This G value can acceses only 
} 

// main function
int main(int argc,char *argv[])
{
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{	
	 
	   	acces(); 			 	// prints the variable inside the function local variable

		cout<<"Global value:- "<<G;   //this prints the value of G that is global variables
	
		
	} 
}
