/*	¬����ѧc++ ex011-1.cpp 2018.10.20 
	
	����һ����λ�����������
*/

#include<iostream>

using namespace std;

int main() 
{
	int n,ge,shi,bai,qian,j;
	
	cout<<"������һ����λ����";
	cin>>n;
	
	ge=n%10;
	shi=(n/10)%10;
	bai=(n/100)%10;
	qian=n/1000;
	j=ge*1000+shi*100+bai*10+qian;
	
	cout<<j<<endl;
	
	return 0;
}
