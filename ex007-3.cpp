/*	卢海北学c++ ex007-3.cpp 2018.10.29 
	
	一个三位数，百位上的数比十位上的数大1，个位上的数是百位上的数的2倍，
	若十位上的数为3，这个三位数是多少？ 
*/

#include<iostream>

using namespace std;

int main() 
{
	int ge,shi,bai,shu;
	shi=3;
	bai=shi+1;
	ge=bai*2;
	shu=bai*100+shi*10+ge;
	cout <<"shu="<<shu<<endl;
	return 0;
}
