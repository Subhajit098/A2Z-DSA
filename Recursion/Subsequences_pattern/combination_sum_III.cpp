#include<bits/stdc++.h>
using namespace std;

// TC : O(N*N)  , SC : O(K) + O(N) 

void insertCombinations(int ind,int k,int sum,int n,vector<int>&ds,vector<vector<int>>&ans){
        if(k==0 && sum==n){
            ans.push_back(ds);
            return;
        }

        if(k==0 && sum<n) return;

        if(k>0 && sum>=n){
            return;
        }

        for(int i=ind;i<=9;i++){
            sum+=i;
            ds.push_back(i);
            insertCombinations(i+1,k-1,sum,n,ds,ans);
            sum-=i;
            ds.pop_back();
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
        insertCombinations(1,k,0,n,ds,ans);
        return ans;
    }