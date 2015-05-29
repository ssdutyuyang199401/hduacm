#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b&&a!=0&&b!=0)
	{
		int t=1;
		for(int i=0;i<b;i++)
		{
			t=(t*a)%1000;
		}
		cout<<t<<endl;
	}
	return 0;
}
