/*	卢海北学c++ ex007-2.cpp 2018.10.29 
	
	不借助中间变量，交换两个变量的值 
*/

#include<iostream>

using namespace std;

int main() 
{
	int a,b;
	a=10;
	b=20;
	cout <<"a="<<a<<",b="<<b<<endl;
	a=a+b; //先把两数和付给a 
	b=a-b; //两数和a-b就得到原来的a值，赋给b 
	a=a-b; //两数和a-b就得到原来的b值，赋给a 
	cout <<"a="<<a<<",b="<<b<<endl;
	return 0;
}
