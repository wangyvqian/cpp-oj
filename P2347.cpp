#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int a[7],ans[10005],tool;
const int wt[7]={0,1,2,3,5,10,20};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1;i<7;i++) cin>>a[i];
    memset(ans,0,sizeof(ans));
    for(int c1=0;c1<=a[1];c1++)
        for(int c2=0;c2<=a[2];c2++)
            for(int c3=0;c3<=a[3];c3++)
                for(int c4=0;c4<=a[4];c4++)
                    for(int c5=0;c5<=a[5];c5++)
                        for(int c6=0;c6<=a[6];c6++)
                            ans[c1*1+c2*2+c3*3+c4*5+c5*10+c6*20]=1;
    for(int i=1;i<=1000;i++){
        if(ans[i])tool++;
    }
    cout<<"Total="<<tool<<endl;
    return 0;
}