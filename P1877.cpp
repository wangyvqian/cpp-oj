#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n,a,b,c[10005],sum;
bool vis[55][1005];
int dfs(int r,int tool,int x){
    if(r>b||r<0)return INT_MIN;
    if(x==n)return r;
    if(vis[tool][r])return INT_MIN;
    vis[tool][r]=true;
    int ans=INT_MIN;
    ans=max(max(ans,dfs(r+c[tool],tool+1,x+1)),max(ans,dfs(r-c[tool],tool+1,x+1)));
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sum=dfs(a,0,0);
    if(sum==INT_MIN)cout<<"-1"<<endl;
    else cout<<sum<<endl;
    return 0;
}