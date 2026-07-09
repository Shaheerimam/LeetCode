class Solution {
public:
    bool isValid(string s) {
        int initSize=s.size();
        int i=0;
        bool flag=true;
        while(s[i]!=NULL){
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(i==0){
                    flag=0;
                    break;
                }
                if((s[i]=='}' && s[i-1]!='{')||(s[i]==']' && s[i-1]!='[')|| (s[i]==')' && s[i-1]!='(')){
                    flag=0;
                    break; 
                }
                
                s.erase(s.begin()+i-1,s.begin()+i+1);
                i-=2;
            }
            i++;
            //cout << s << endl;
        }
        if(s.size()>0){
            return false;
        }
        return flag;
    }
};