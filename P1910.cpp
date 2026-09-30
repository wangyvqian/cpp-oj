#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int n,m,x,a[105],b[105],c[105],dp[1005][1005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>x;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    for(int i=0;i<n;i++){
        for(int j=m;j>=b[i];j--){
            for(int k=x;k>=c[i];k--){
                if(j>=b[i]&&k>=c[i])dp[j][k]=max(dp[j][k],dp[j-b[i]][k-c[i]]+a[i]);
            }
        }
    }
    cout<<dp[m][x]<<endl;
    return 0;
}