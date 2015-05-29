#include<iostream>
using namespace std;
int main()
{
	int n,u,d;
	while(cin>>n>>u>>d&&n!=0)
	{
		int minute=0,length=1;
		while(1)
		{
			minute++;
			length+=u;
			if(length>n)
				break;
			else
			{
				minute++;
				length-=d;
			}
		}
		cout<<minute<<endl;
	}
	return 0;
}
