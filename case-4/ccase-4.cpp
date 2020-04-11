/*
filename: 4.cpp
details:to find the purpose and difference in public,private and protected access specifiers
author:K.Lukesh Kumar 
date:09/04/2020
*/
#include <iostream>
using namespace std;

class base
{
 	private:
        int x;

 	protected:
 	    int y;

 	public:
 	    int z;

 	base() //constructor to initialize data members
 	{
 		cout<<"enter the value of x :- "<<endl;
 		cin>>x;
 		
 		cout<<"enter the value of y :- "<<endl;
 		cin>>y;
 		
 		cout<<"enter the value of z :- "<<endl;
 		cin>>z;
 		
 	  
 	}
};

class derive: public base
{
 	//y is protected and z is public members of class derive
 	public:
 	    void showdata()
 	    {
 	       cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
 	    }
};
int main(int argc,char *argv[])
{
	if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
		 derive a; //creating object to the class a
     a.showdata();
    
     return 0;
} 	//end of program
	}
    


