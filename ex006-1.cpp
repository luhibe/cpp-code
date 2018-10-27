/*	卢海北学c++ ex006-1.cpp 2018.10.27 
	
	格莱尔买来 30根骨头，第一天吃掉一半后又吃了一根，
	第二天将剩下的骨头吃了一半后又吃了一根，第三天
	仍然如此。问第三天吃完后还剩下多少根骨头？ 
*/

#include<iostream>

using namespace std;

int main()
{
	int n=30;
	n=n/2-1;
	n=n/2-1;
	n=n/2-1;
	cout<<n<<endl;
	return 0;
}
