#include<bits/stdc++.h>
using namespace std;


void reverse(int n,vector<int>&nums,int i){
    if(i>=n/2) return;

    swap(nums[i],nums[n-i-1]);
    reverse(n, nums, i+1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    reverse(n,nums,0);
    return nums;
}
