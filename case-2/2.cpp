/*
filename: 2.cpp
details:To find the formula for given expression :-- 1+4+9+16+….+100
author:K>Lukesh Kumar
date:09/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//main function
int main(int argc,char *argv[])
{
    int Sum,Num; //declaring  variables
    if(argc==1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe argument"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out argument"<<endl;
		
		cout<<"Enter Input: ";
		cin>>Num; //read 'Num'
		Sum=0;
    	for(int i=1; i<=Num; i++)	//checks the  condition
        	Sum =Sum + (i*i);	//returns the output based on the logic to : 1+4+9+16+….+100
     	cout << "Output: " << Sum;
     	return 0;
	}
	else
	{	
		Num = atoi(argv[1]); //assigning the argument to 'n'
    	Sum=0;
    	for(int i=1; i<=Num; i++)	//checks the argument value
        	Sum =Sum + (i*i);	//gives output based on the expression: 1+4+9+16+….+100
     	cout << "Output: " << Sum;
     	return 0;
	} 
}
