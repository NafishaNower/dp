#include<bits/stdc++.h>
using namespace std;
int h[10000000];
int dp[1000000];
int k;

int c(int i)
{
    if(i==0)return 0;
    int cost=INT_MAX;
    if(dp[i]!=-1)return dp[i];
    for(int j=1;j<=k;j++){
            if(i-j>=0)
    cost=min(cost,(c(i-j)+abs(h[i]-h[i-j])));}
        dp[i]=cost;
    return dp[i];
}



int main()

{
    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t>>k;
    //int s[t+5];
    for(int i=0; i<t; i++)
    {
        cin>>h[i];
    }
    cout<<c(t-1)<<endl;;
    return 0;
}

