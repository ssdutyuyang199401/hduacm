#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n-->0)
	{
		int ah,am,as,bh,bm,bs,h=0,m=0,s=0;
		cin>>ah>>am>>as>>bh>>bm>>bs;
		if(as+bs>=60)
		{
			s=as+bs-60;
			m+=1;
		}
		else
		{
			s=as+bs;
		}
		if(m+bm+am>=60)
		{
			m=m+am+bm-60;
			h+=1;
		}
		else
		{
			m=m+am+bm;
		}
		h=h+ah+bh;
		cout<<h<<" "<<m<<" "<<s<<endl;
	}
	return 0;
}
