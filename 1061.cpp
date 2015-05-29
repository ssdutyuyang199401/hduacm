#include<iostream>
using namespace std;
 int main()
 {
	 int a[10][4]={{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};
	 int n,t;
	 cin>>n;
	 while(n-->0)
	 {
		 cin>>t;
		 int x=t%10;
		 if(x==0||x==1||x==5||x==6)
			 cout<<a[x][0]<<endl;
		 if(x==2||x==3||x==7||x==8)
		 {
			 int y=t%4;
			 cout<<a[x][y]<<endl;
		 }
		 if(x==4||x==9)
		 {
			 int z=t%2;
			 cout<<a[x][z]<<endl;
		 }
	 }
	 return 0;
 }
