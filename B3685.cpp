#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n,a[4];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    a[1]=n%10;
    a[2]=n/10%10;
    a[3]=n/100%10;
    i64 sum=a[1]+a[2]+a[3];
    cout<<sum<<endl;
    cout<<pow(sum,2)<<endl;
    cout<<pow(sum,3)<<endl;
    return 0;
}