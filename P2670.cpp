#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 m,n,i,j;
int a[105][105];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            char c;
            cin>>c;
            if(c=='*')a[i][j]=-1;
            else a[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==-1){
                cout<<"*";
            }
            else{
                a[i][j]=(a[i-1][j-1]==-1)+(a[i-1][j]==-1)+(a[i-1][j+1]==-1)+
                         (a[i][j-1]==-1)+(a[i][j+1]==-1)+
                         (a[i+1][j-1]==-1)+(a[i+1][j]==-1)+(a[i+1][j+1]==-1);
                cout<<a[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}