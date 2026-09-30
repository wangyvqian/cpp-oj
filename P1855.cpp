#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n,m,t,a[1005],b[1005],dp[1005][1005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>t;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    for(int i=0;i<n;i++){
        for(int j=m;j>=0;j--){
            for(int k=t;k>=0;k--){
                if(j>=a[i]&&k>=b[i]) dp[j][k]=max(dp[j][k],dp[j-a[i]][k-b[i]]+1);
            }
        }
    }
    cout<<dp[m][t]<<endl;
    return 0;
}