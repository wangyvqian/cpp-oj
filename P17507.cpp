#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int a,b,x,ans=0;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>a>>b>>x;
    for(int i=a;i<=b;i++){
        int t=i;
        while(t>0){
            ans++;
            t/=x;
        }
    }
    cout<<ans;
    return 0;
}