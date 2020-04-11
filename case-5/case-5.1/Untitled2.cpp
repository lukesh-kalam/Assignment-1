/*
filename: 3.2.cpp
details:Different ways to access private member variable in a pparent class 
author:K.Lukesh Kumar 
date:10/04/2020
*/

#include<iostream>
using namespace std;

class A 
{
    private:
            int a;
    
    public :
    A()  { 
        
        cout<<"Enter the value of a :- "<<endl;   //Giving input
        cin>>a;
        
         }
    
    friend void showA(A&);   //This is global friend function
};

void showA(A& x)
{
    cout<<"The private variable x value is :- "<<x.a<<endl;   //As showA if friend function it can access private data also
}

int main()
{
    A a;     // creating object to the class
    showA(a);

return 0;
}

