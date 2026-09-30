#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int n;
int f(int a,int ans){
    if(a==495)return ans;
    int b[3];
    b[0]=a%10;
    b[1]=a/10%10;
    b[2]=a/100%10;
    sort(b,b+3);
    int c=b[0]*100+b[1]*10+b[2],d=b[2]*100+b[1]*10+b[0];
    return f(d-c,ans+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    cout<<f(n,0)<<endl;
    return 0;
}