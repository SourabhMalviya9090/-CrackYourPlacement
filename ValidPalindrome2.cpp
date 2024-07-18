class Solution {
public: 
    bool isPalindrome(string s, int ind1,int ind2){
        while(ind1<=ind2){
            if(s[ind1]!= s[ind2]){
                return false;
            }
            ind1++;
            ind2--;
        }
        return true;

    }
    bool validPalindrome(string s) {
        int ind1=-1;
        int ind2=-1;
        int n= s.length()-1;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[n-i]){
                ind1 = i;
                ind2 = n-i;
                break;
            }

        }
        if(ind1==-1 && ind2==-1) return true;
        bool afterind1 = isPalindrome(s,ind1+1,ind2);
        bool afterind2 = isPalindrome(s,ind1,ind2-1);
        return afterind1 | afterind2 ; 
        
    }
};
