/*
filename: 6.cpp
details:Given a class has a two private member vairables int* and char[20]. Complete the class
        declaration and definition with all the necessary constructors/destructor/operator
        overloading/member functions. Write a method display() which will display the int and char variables
        for the given object.
author:K.Lukesh Kumar
date:20/04/2020
*/
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class student{
private:
    int *sno;
    char sName[20];
public:
    student()                                   //constructor
    {
        cout<<"Student class constructor is Invoked"<<endl;
    }
    student(int *i_no,char *cname)              //parameterized constructor
    {
        cout<<"Student class parameterized Constructor is Invoked"<<endl;
        sno=i_no;
        strcpy(sName,cname);
    }


    void Mem_func(int *ino,char cname[])        //Member Function
    {
        sno=ino;
        strcpy(sName,cname);
    }



    void display()                              //Function to display
    {
        cout<<"RollNo:"<<*sno<<endl<<"Name:"<<sName<<endl;
        cout<<endl;
    }

    void operator ++()                          //increment operator overloading
    {
        ++(*sno);
    }
    ~student()                                  //Destructor
    {
        cout<<"Student class destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //help command
        {
            cout<<"used to display private variable int* and char[20], enter one int and char variables"<<endl;
        }
    }
    else
    {
        student obj;
        int inum;
        char cName[20];
        cout<<"Enter RollNo of Student:";
        cin>>inum;
        cout<<"Enter Name of Student:";
        getchar();
        cin.get(cName,100,'\n');
        cout<<endl<<"Using Parameterized Constructor"<<endl;
        student obj2(&inum,cName);    //parameterized constructor
        obj2.display();
        cout<<"After Operator Overloading"<<endl;
        ++obj2;     //calling of increment operator overloading
        cout<<"Using Member Function"<<endl;
        obj.Mem_func(&inum,cName);    //calling of member function
        obj.display();
    }
    return 0;
}  
