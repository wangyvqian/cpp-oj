#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 v,n,c,a[10005],b[10005],dp[10005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>v>>n>>c;
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    for(int i=1;i<=n;i++){
        for(int j=c;j>=b[i];j--){
            dp[j]=max(dp[j],dp[j-b[i]]+a[i]);
        }
    }
    if(dp[c]<v)cout<<"Impossible"<<endl;
    else{
        int i=c;
        while(dp[i]>=v){
            i--;
        }
        cout<<c-(i+1)<<endl;
    }
    return 0;
}