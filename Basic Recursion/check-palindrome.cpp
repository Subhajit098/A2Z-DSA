#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string& str,int i,int n){
    if(i>=n/2) return true;

    if(str[i]!=str[n-i-1]) return false;

    return checkPalindrome(str, i+1, n);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.size();
    return checkPalindrome(str, 0, n) ;
}
