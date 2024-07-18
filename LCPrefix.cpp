class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref = strs[0];
        string ans  ="";

        for(int ind =0;ind<ref.length();ind++){
           for(int i=1;i<strs.size();i++){
            if(ref[ind]!= strs[i][ind]){
                 return ans;
            }
           }
           ans += ref[ind];
        }

        return ans;
}
