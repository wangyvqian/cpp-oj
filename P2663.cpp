#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
using i64 = long long;
int n,a[105],sum,j[5005][55][105];
int dfs(int s,int r,int w){
	if(r*2==n) return s;
	if(w==n) return 0;
    if(j[s][r][w]!=-1)return j[s][r][w];
	int mx=0;
	if((s+a[w])*2<=sum) mx=dfs(s+a[w],r+1,w+1);
	if(n-w-1+r>=n/2) mx=max(mx,dfs(s,r,w+1));
	return j[s][r][w]=mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(j,-1,sizeof(j));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<dfs(0,0,0)<<endl;
    return 0;
}