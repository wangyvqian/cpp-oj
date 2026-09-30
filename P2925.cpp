#include<bits/stdc++.h>
using namespace std;
int f[450001]={0},w[100001],c[100001],n,m;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
        w[i]=c[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=c[i];j--)
		{
			if(f[j-c[i]]+w[i]>f[j])
			f[j]=f[j-c[i]]+w[i];
		}
	}
	cout<<f[m];
	return 0;
}
