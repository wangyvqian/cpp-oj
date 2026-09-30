#include<bits/stdc++.h>
    using namespace std;
    int x,y;
    int t[10002],p[10002];
    int f[10002];
    int main(){
        int m,n;
        cin>>m>>n;
           for(int i=1;i<=n;i++){
              cin>>p[i]>>t[i];
           }
        for(int i=1;i<=n;i++){
            for(int t1=t[i];t1<=m;t1++){
                f[t1]=max(f[t1],f[t1-t[i]]+p[i]);
            }
        }
        cout<<f[m];
        return 0;
    }

