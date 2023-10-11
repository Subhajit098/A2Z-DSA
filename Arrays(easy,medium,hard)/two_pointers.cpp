#include<bits/stdc++.h>
using namespace std;


// Time Complexity : O(n*log(n)) + O(n)
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    string ans="NO";
    sort(book.begin(),book.end());
    int first=book[0],last=book[n-1];
    while(first<last){
      if (first + last == target) {
        ans = "YES";
        break;
      }
      else if(first+last<target) first++;

      else last--; 
    }

    return ans;
}