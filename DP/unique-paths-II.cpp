#include<bits/stdc++.h>
using namespace std;

    int helper(int row,int col,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
        if(row>=0 && col>=0 && obstacleGrid[row][col]==1) return 0;

        if(row==0 && col==0) return 1;

        if(row<0 || col<0) return 0;

        if(dp[row][col]!=-1) return dp[row][col];

        int up=helper(row-1,col,obstacleGrid,dp);
        int left=helper(row,col-1,obstacleGrid,dp);
        return  dp[row][col]=up+left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row=obstacleGrid.size(),col=obstacleGrid[0].size();
        vector<vector<int>>dp(row,vector<int>(col,-1));
        // return helper(row-1,col-1,obstacleGrid,dp);
        // dp[0][0]=1;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(obstacleGrid[i][j]==1) dp[i][j]=0;

                else if(i==0 && j==0) dp[i][j]=1;

                else{
                    int up=0,left=0;
                    if(i>0)
                    up=dp[i-1][j];

                    if(j>0)
                    left=dp[i][j-1];

                    dp[i][j]=up+left;
                }
            }
        }
        return dp[row-1][col-1];
    }