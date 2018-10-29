/*	卢海北学c++ ex002-1.cpp 2018.10.29 
	
	交换两个变量的值
*/

#include<iostream>

using namespace std;

int main() 
{
	int a,b,t;
	a=10;
	b=20;
	cout <<"a="<<a<<",b="<<b<<endl;
	t=a;
	a=b;
	b=t;
	cout <<"a="<<a<<",b="<<b<<endl;
	return 0;
}
