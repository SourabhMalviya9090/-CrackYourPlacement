//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n= string_list.size();
        unordered_map<int,string> hash;
        vector<pair<string,int>> temp;
        for(int i=0;i<n;i++){
            hash[i] = string_list[i];
            sort(string_list[i].begin(), string_list[i].end());
            temp.push_back({string_list[i],i});
        }
        
        sort(temp.begin(), temp.end());
        
        string last = "";
        vector<vector<string>> ans;
        vector<string> group;
        string curr ="";
        string originalword ="";
        for(int i=0;i<temp.size();i++){
            curr = temp[i].first;
            originalword = hash[temp[i].second];
            if(curr==last){
                group.push_back(originalword);
            }
            else{
                if(last!=""){
                ans.push_back(group);
   
                }
                vector<string> temp2;
                group= temp2;
                group.push_back(originalword);
                last =curr;
            }
            
        }
        ans.push_back(group);
        if(last!=curr){ans.push_back({originalword});}
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends
