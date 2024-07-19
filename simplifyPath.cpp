
class Solution {
public:
    string simplifyPath(string path) {
        int ind =0;
        stack<string> st;
        while(ind<path.size()){
            string curr ="";
            while(ind<path.size() && path[ind]=='/'){
                ind++;
            }
            curr+= '/';
            while(ind<path.size() && path[ind]!='/'){
                curr+= path[ind];
                ind++;
            }

            if(curr!="/." && curr!="/.." && curr!="/"){
                st.push(curr);
            }

            else if(curr=="/.."){
                if(st.empty()!=1 && st.top()!="/"){
                    st.pop();
                }
            }

        }

        string ans  ="";
        while(st.empty()!=1){
            ans = st.top()+ ans;
            st.pop();
        }
        if(ans=="") ans ="/";
        return ans;
        
    }
};
