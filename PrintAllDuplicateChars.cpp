#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.

    vector<int> count(52,0);

    for(int i=0;i<n;i++){
        int asc = int(s[i]);
        if(asc>= 65 && asc<= 90){
            count[asc-65+26]++;
        }else{
            count[asc-97]++;
        }
    }
    vector<pair<char,int>> ans;
    for(int j=0;j<52;j++){
        if(count[j]>1){
            char c;
            if(j>=0 && j<26){
                c = char(j+97);
            }
            else{
                c=  char(j-26+65);
            }
            ans.push_back({c, count[j]});
        }
    }
    return ans;
}
