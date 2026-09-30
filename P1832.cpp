#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 i,b[1001],dp[1001],j,n;
void prime(){
	for(i=2;i<=500;i++)
		if(!b[i])
			for(j=2;i*j<=1000;j++)
				b[i*j]=1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prime();
    cin>>n;
    dp[0]=1;
    for(i=2;i<=n;i++){
        if(!b[i]){
            for(j=i;j<=n;j++){
                dp[j]+=dp[j-i];
            }
        }
    }
    cout<<dp[n];
    return 0;
}