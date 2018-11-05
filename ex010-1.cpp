/*	卢海北学c++ ex010-1.cpp 2018.11.5 
	
	四则运算
*/

#include<iostream>

using namespace std;

int main() 
{
	float a,b,c,d,e,f;
	cout<<"请输入第一个数：";
	cin>>a;
	cout<<"请输入第二个数：";
	cin>>b;
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	cout<<a<<"+"<<b<<"="<<c<<endl;
	cout<<a<<"-"<<b<<"="<<d<<endl;
	cout<<a<<"*"<<b<<"="<<e<<endl;
	cout<<a<<"/"<<b<<"="<<f<<endl;
	return 0;
}
