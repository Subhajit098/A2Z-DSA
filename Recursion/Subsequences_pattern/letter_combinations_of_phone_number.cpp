#include<bits/stdc++.h>
using namespace std;

void func(string digits,int ind,vector<string>&ans,unordered_map<int,vector<string>> &letters){
        if(digits.size()==0) return ;
        
        if(ind==digits.size()) return ;

        if(ans.size()==0) {
            ans=letters[digits[ind]-'0'] ;
        }
        else{
                vector<string>vec;
            for(int i=0;i<ans.size();i++){
                int length=letters[digits[ind]-'0'].size();
                for(int j=0;j<length;j++){
                    vec.push_back(ans[i]+letters[digits[ind]-'0'][j]);
                }
            }
            ans=vec;
        }
       
        func(digits,ind+1,ans,letters);
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<int,vector<string>> letters;
    letters.insert({2,{"a","b","c"}});
    letters.insert({3,{"d","e","f"}});
    letters.insert({4,{"g","h","i"}});
    letters.insert({5,{"j","k","l"}});
    letters.insert({6,{"m","n","o"}});
    letters.insert({7,{"p","q","r","s"}});
    letters.insert({8,{"t","u","v"}});
    letters.insert({9,{"w","x","y","z"}});
        vector<string>ans;
        func(digits,0,ans,letters);
        return ans;
    }