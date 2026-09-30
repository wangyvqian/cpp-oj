#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int n,x,y,a[405],l[4]={0,1,0,-1},r[4]={1,0,-1,0};
bool to[25][25];
int isprise(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void prise(){
    int cnt=0;
    for(int i=2;cnt<=400;i++){
        if(isprise(i))a[++cnt]=i;
    }
}
void dfs(int c,int b,int p,int q){//a：第几个素数，b：往哪走，p，q：当前位置
    if(p==x&&q==y){
        cout<<a[c];
        return;
    }
    else{
        to[p][q]=1;

    }
    int j=0;
    while(j<4){
        int p1=p+l[b];
        int q1=q+r[b];
        if(p1>0&&p1<=n&&q1>0&&q1<=n&&to[p1][q1]==0){
            dfs(c+1,b,p1,q1);
            break;
        }
        j++;
        b++;
        b%=4;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prise();
    cin>>n>>x>>y;
    dfs(1,0,1,1);
    return 0;
}