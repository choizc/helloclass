#include"helloclass.h"
#include<iostream>
using namespace std;

HelloClass::HelloClass()
{
        cout<<"I'm being created!"<<endl;
}

HelloClass::~HelloClass()
{
        cout<<"I'm being destroyed!"<<endl;
}

void HelloClass::SayHello()
{
        cout<<"Hello Class!"<<endl;
}





