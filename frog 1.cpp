#include<bits/stdc++.h>
using namespace std;
int h[10000000];
int dp[1000000];


int c(int i)
{
    if(i==0)return 0;
    int cost=INT_MAX;
    //if(dp[i]!=-1)return dp[i];
    cost=min(cost,(c(i-1)+abs(h[i]-h[i-1])));
    if(i>1)
        cost=min(cost,c(i-2)+abs(h[i]-h[i-2]));
        //dp[i]=cost;
    return cost;
}



int main()

{
    //memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    //int s[t+5];
    for(int i=0; i<t; i++)
    {
        cin>>h[i];
    }
    cout<<c(t-1)<<endl;;
    return 0;
}
