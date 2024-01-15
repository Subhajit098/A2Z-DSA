#include<bits/stdc++.h>
using namespace std;

 long long helper(vector<vector<int>>& grid,int row,int col,vector<vector<int>>&dp){
        if(row==0 && col==0) return grid[row][col];

        if(row<0 || col<0) return INT_MAX;

        if(dp[row][col]!=-1) return dp[row][col];

        long long up=grid[row][col] + helper(grid,row-1,col,dp);
        long long left=grid[row][col] + helper(grid,row,col-1,dp);

        return dp[row][col]=min(left,up);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>>dp(row,vector<int>(col,-1));
        return (int)helper(grid,row-1,col-1,dp);
    }