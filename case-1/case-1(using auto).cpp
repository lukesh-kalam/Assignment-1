
/*
filename: 1.1.cpp
details:Parse the given command line and display
author:K.Lukesh Kumar
date:18/04/2020
*/

#include <iostream>
using namespace std;

void autoStorageClass()
{



	// Declaring an auto variable
	// No data-type declaration needed
	auto a = 4;
	auto b = 5.23;
	auto c = "lukesh";
	auto d = 'L';

	// printing the auto variables
	cout << sizeof(a) << " \n";
	cout << sizeof(b) << " \n";
	cout << sizeof(c) << " \n";
	cout << sizeof(d) << " \n";
}

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

	// To demonstrate auto Storage Class
	autoStorageClass();

	return 0;
	}
}

