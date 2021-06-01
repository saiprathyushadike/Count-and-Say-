class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        else{
            string s = countAndSay(n-1);
            s += 'z';//end correction for index
            string ret="";int cnt = 1;int p = 1;
            while(p<s.length()){
                while(p<s.length() && s[p]==s[p-1])
                    cnt++,p++;
                ret += (to_string(cnt) + s[p-1]);
                cnt = 1;
                p++;
            }
            return ret;
        }
    }
    
};
