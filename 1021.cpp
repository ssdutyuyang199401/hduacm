#include<iostream>
using namespace std;
int f(int n)
{
	if(n==0||n==1)
		return 0;
	if(n==2)
		return 1;
	if((n-2)%4==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(f(n)==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
