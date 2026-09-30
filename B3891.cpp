#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 t,n;
string a,b;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n>>a;
        b=a;
        i64 ans=0;
        reverse(b.begin(),b.end());
        // cout<<b<<endl;
        for(int i=0;i<n;i++){
            if(a[i]=='A'&&b[i]=='T')ans+=i+1;
            if(a[i]=='T'&&b[i]=='A')ans+=i+1;
            if(a[i]=='C'&&b[i]=='G')ans+=i+1;
            if(a[i]=='G'&&b[i]=='C')ans+=i+1;
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
                ans=0;
                // cout<<-1<<endl;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}