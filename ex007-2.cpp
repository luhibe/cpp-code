/*	¬����ѧc++ ex007-2.cpp 2018.10.29 
	
	�������м��������������������ֵ 
*/

#include<iostream>

using namespace std;

int main() 
{
	int a,b;
	a=10;
	b=20;
	cout <<"a="<<a<<",b="<<b<<endl;
	a=a+b; //�Ȱ������͸���a 
	b=a-b; //������a-b�͵õ�ԭ����aֵ������b 
	a=a-b; //������a-b�͵õ�ԭ����bֵ������a 
	cout <<"a="<<a<<",b="<<b<<endl;
	return 0;
}
