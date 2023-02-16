class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sub = s.size();
        int str = t.size();
        int j=0;
        
        for(int i=0 ; i<str && j<sub ; i++)
        {
            if(t[i]==s[j])
            {
                j++;
            }
        }
        
        return (j==sub);
    }
};