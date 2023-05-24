class Solution {
public:
    bool isPalindrome(string s) {
       
        vector<char>v;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(isalpha(tolower(s[i])) || isdigit(s[i]))
            {
                v.push_back(tolower(s[i]));
            }
                
        }
        int len = v.size();
        for(int i=0 ; i<len/2 ; i++)
        {
            if(v[i]!=v[len-i-1])
            {
                return false;
            }
        }
        return true;
    }
};