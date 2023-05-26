class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         unordered_set<char> uniqueChars;
        
//         int l = 0 , r=0 , result=0;
        
//         while (r<s.size()){
//             if(uniqueChars.find(s[r])==uniqueChars.end()){
//                 uniqueChars.insert(s[r]);
//                 result = max(result ,r-l+1);
//                 r++;
//             }
//             else{
//                 uniqueChars.erase(s[l]);
//                 l++;
//             }
//         }
//         return result;
        
        
        
        vector<int> uniqueChars(256, -1);
        int l=0 , r=0 , result=0;
        
        while (r<s.size()){
            if(uniqueChars[s[r]]==-1 || uniqueChars[s[r]] < l){
                uniqueChars[s[r]]=r;
                result = max(result ,r-l+1);
                 r++;
            }
            else
            {
                 l = uniqueChars[s[r]] + 1;
                uniqueChars[s[r]] = r;
                 r++;
            }
        }
        return result;
        
        
     }
};