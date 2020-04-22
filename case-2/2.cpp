/*
filename: 2.cpp
details:To find the formula for given expression :-- 1+4+9+16+….+100
author:K.Lukesh Kumar
date:21/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//main function
int main(int argc,char *argv[])
{
    int Sum,Num,a; //declaring  variables
    if(argc==1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe argument"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out argument"<<endl;
		
		cout<<"Enter Input: ";
		cin>>Num; //read 'Num'
		Sum=0;
		if(Num<0)
		{
		    a=Num*(-1);
    	for(int i=1; i<=a; i++)	//checks the  condition
        	Sum =Sum + (i*i);//returns the output based on the logic to : 1+4+9+16+….+100
     	cout << "Output: " << Sum*(-1);
     	return 0;
		}
		else
	    {
	       for(int i=1; i<=a; i++)	//checks the  condition
        	Sum =Sum + (i*i);//returns the output based on the logic to : 1+4+9+16+….+100
     	cout << "Output: " << Sum;
     	return 0; 
	    }
     	
	}
	else
	{	
	    	cout<<"Enter Input: ";
		cin>>Num; //read 'Num'
		Sum=0;
		if(Num<0)
		{
		    a=Num*(-1);
    	for(int i=1; i<=a; i++)	//checks the  condition
        	Sum =Sum + (i*i);//returns the output based on the logic to : 1+4+9+16+….+100
     	cout << "Output: " << Sum*(-1);
     	return 0;
		}
		else
	    {
	       for(int i=1; i<=a; i++)	//checks the  condition
        	Sum =Sum + (i*i);//returns the output based on the logic to : 1+4+9+16+….+100
     	cout << "Output: " << Sum;
     	return 0; 
	    }
	    
	    
	
	} 
}
