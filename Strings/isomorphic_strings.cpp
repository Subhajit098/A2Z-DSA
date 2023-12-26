#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
        int size1=s.size(),size2=t.size();
        if(s==t) return true;
        unordered_map<char,char>mp;
        unordered_map<char,bool>taken;
        for(int i=0;i<size1;i++){
             if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                if(taken[t[i]]) return false;
                mp.insert({s[i],t[i]});
                taken[t[i]]=true;
            }
        }
        return true;
    }