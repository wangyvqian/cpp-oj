#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
string s;
char c;
struct node{
    int l;
    bool is,ib,in,isp,isture;
}a;
void clean(){
    a.l=0;
    a.is=0;
    a.ib=0;
    a.in=0;
    a.isp=0;
    a.isture=1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while(cin>>c){
        if(c==','){
            a.l=s.length();
            if(a.l<6||a.l>12){
                a.isture=0;
            }
            for(int i=0;i<a.l;i++){
                if(s[i]>='A'&&s[i]<='Z')a.is=1;
                if(s[i]>='a'&&s[i]<='z')a.ib=1;
                if(s[i]>='0'&&s[i]<='9')a.in=1;
                if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$')a.isp=1;
            }
            if(a.is==0||a.ib==0||a.in==0||a.isp==0)a.isture=0;
            if(a.isture==1)cout<<s<<endl;
            clean();
        }
        else{
            s+=c;
        }
    }
    return 0;
}