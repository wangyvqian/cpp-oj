#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n,m,a[105],l,r,k,dp[10005];
struct node{
    i64 x,y;
}b[105];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>l>>r>>m>>n;
    l=r/l;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]=l*a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i].x>>b[i].y;
    }
    cin>>k;
    for(int i=1;i<=m;i++){
        for(int j=k;j>=a[b[i].x];j--){
            dp[j]=max(dp[j],dp[j-a[b[i].x]]+b[i].y);
        }
    }
    cout<<dp[k]<<endl;
    return 0;
}