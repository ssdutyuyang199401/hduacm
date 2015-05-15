//先运用基本的欧几里得算法求出最大公因子，然后推倒最大公因子和最大公倍数的关系
#include<iostream>
using namespace std;
int gbs(int a,int b);
int main(void)
{
	int a,b;
	while(cin>>a>>b)
	cout<<gbs(a,b)<<endl;
	return 0;
}
int gbs(int a,int b)
{
	int cs=a;
	int bcs=b;
	int ys=a%b;
	while(ys!=0)
	{
		cs=bcs;
		bcs=ys;
		ys=cs%bcs;
	}
	return a/bcs*b;
}
