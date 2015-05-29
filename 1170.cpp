#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n-->0)
	{
		char a;
		int b,c;
		cin>>a>>b>>c;
		if(a=='+')
			cout<<b+c<<endl;
		if(a=='-')
			cout<<b-c<<endl;
		if(a=='*')
			cout<<b*c<<endl;
		if(a=='/')
		{	
			if(b%c==0)
				cout<<b/c<<endl;
			else
			{
			cout<<fixed<<setprecision(2)<<(b*1.0)/c<<endl;
			cout.precision( 6 );
			}
		}
	}
	return 0;
}
