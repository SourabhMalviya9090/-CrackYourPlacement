class Solution {
public:
    int strStr(string haystack, string needle) {

        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                int n=1;
                int h =i+1;
                while(h<haystack.size() && n<needle.size() && haystack[h]==needle[n]){
                    n++;
                    h++;
                }
                if(n>=needle.size()) return i;
            }
        }

        return -1;
}
