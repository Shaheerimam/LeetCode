class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;
        for(char c : s){
            if(c!='#'){
                st.push(c);
            }
            if(c=='#' && !st.empty()){
                st.pop();
            }
        }
        for(char c : t){
            if(c!='#'){
                st2.push(c);
            }
            if(c=='#' && !st2.empty()){
                st2.pop();
            }
        }
        if(st.size()!=st2.size()){
            return false;
        }
        while(!st.empty()){
            if(st.top()!=st2.top()){
                return false;
            }
            st.pop();
            st2.pop();
        }
        return true;
    }
};