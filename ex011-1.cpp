/*	卢海北学c++ ex011-1.cpp 2018.10.20 
	
	输入一个四位数，逆序输出
*/

#include<iostream>

using namespace std;

int main() 
{
	int n,ge,shi,bai,qian,j;
	
	cout<<"请输入一个四位数：";
	cin>>n;
	
	ge=n%10;
	shi=(n/10)%10;
	bai=(n/100)%10;
	qian=n/1000;
	j=ge*1000+shi*100+bai*10+qian;
	
	cout<<j<<endl;
	
	return 0;
}
