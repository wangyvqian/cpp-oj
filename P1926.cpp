#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n,m,k,r,a[15],sum,anss;
struct node{
    i64 x,y;
}b[15];
i64 dfs(int idx,i64 t,i64 s){
    if(s>=k)return t;
    if(idx==m)return INT_MAX;      // 作业用完仍不及格
    i64 res=dfs(idx+1,t,s);
    if(t+b[idx].x<=r)
        res=min(res,dfs(idx+1,t+b[idx].x,s+b[idx].y));
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>k>>r;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i].x;
    for(int i=0;i<m;i++)cin>>b[i].y;
    sum=dfs(0,0,0);
    r-=sum;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(r>=a[i]){
            anss++;
            r-=a[i];
        }
    }
    cout<<anss<<endl;
    return 0;
}