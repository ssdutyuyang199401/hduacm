#include<iostream>
using namespace std;
int main(void)
{
	int times,n;
	cin>>times;
	while(times-->0)
	{
		cin>>n;
		int *m=new int[n];
		int sum=0;
		for(int i=0;i<n;i++)
			cin>>m[i];
		for(int i=0;i<n;i++)
			sum+=m[i];
		cout<<sum<<endl;
		delete [] m;
	}
	return 0;
}
