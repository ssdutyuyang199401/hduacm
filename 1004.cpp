#include<iostream>
using namespace std;
int main(void)
{
    int a[1000];
    char b[1000][16];
    int n=0;
    while(cin>>n&&n!=0)
    {
        int max=0;
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
        {
            a[i]=1;
            for(int j=i+1;j<n;j++)
            {
                if(strcmp(b[i],b[j])==0)
                    a[i]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>a[max])
                max=i;
        }
        cout<<b[max]<<endl;
    }
    return 0;
}
