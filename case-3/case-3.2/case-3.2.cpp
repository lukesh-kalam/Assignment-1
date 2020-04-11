/*
filename: 3.2.cpp
details:To see the modifiers types
author:K.Lukesh Kumar 
date:09/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

	// declaring varible 
    signed a; 
    unsigned b;
     int  x = -1; 
     unsigned short c;	
	signed short d;		
    
    
// main function
int main(int argc,char *argv[])
{
	// declaring varible signed short
	
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{		
		 cout << "The size of a is " << sizeof(a) <<endl; //the conversion below
		 cout << "The size of b is " << sizeof(b) <<endl; 
		 cout << " unsigned short = " << c << endl;
		cout << " signed short = " << d << endl;
		 cout << "x is "<< x  << endl; 
		 
		return 0;
	} 
}
