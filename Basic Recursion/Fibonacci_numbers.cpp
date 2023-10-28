#include<bits/stdc++.h>
using namespace std;


vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>dp(n,-1);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp;

}