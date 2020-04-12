/*
filename: 6.cpp
details:Given a class has a two private member vairables int* and char[20]. Complete the class
        declaration and definition with all the necessary constructors/destructor/operator
        overloading/member functions. Write a method display() which will display the int and char variables
        for the given object.
author:K.Lukesh Kumar
date:09/04/2020
*/


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Student{
private:
    int *iRoll_no;
    char cName[20];
public:
    Student()
    {
        cout<<"Constructor is Invoked"<<endl;
    }
    Student(int *i_no,char *cname)
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
        iRoll_no=i_no;
        strcpy(cName,cname);
    }


    void Assign_Value(int *ino,char cname[])
    {
        iRoll_no=ino;
        strcpy(cName,cname);
    }



    void display()
    {
        cout<<"RollNo:"<<*iRoll_no<<endl<<"Name:"<<cName<<endl;
        cout<<endl;
    }

    void operator ++()  //increment operator overloading
    {
        ++(*iRoll_no);
    }
    ~Student()
    {
        cout<<"Destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //created a help command
        {
            cout<<"used to display private variable int* and char[20], enter one int and char variables"<<endl;
        }
    }
    else
    {
        Student obj;
        int iVal;
        char cNm[20];
        cout<<"Enter RollNo of Student:";
        cin>>iVal;
        cout<<"Enter Name of Student:";
        getchar();
        cin.get(cNm,100,'\n');
        cout<<endl<<"Using Parameterized Constructor"<<endl;
        Student obj2(&iVal,cNm);    //parameterized constructor
        obj2.display();
        cout<<"After Operator Overloading"<<endl;
        ++obj2;     //calling of increment operator overloading
        cout<<"Using Member Function"<<endl;
        obj.Assign_Value(&iVal,cNm);    //calling of member function
        obj.display();
    }
    return 0;
}
