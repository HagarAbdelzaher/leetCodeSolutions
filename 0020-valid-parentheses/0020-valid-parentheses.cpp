class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0)
            return false;
        stack<char> st;
        unordered_map<char,char> parents = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for(int i=0 ; i<s.size() ; i++){
            
            if(parents.find(s[i])!= parents.end()) // if the current character is closing 
            {
                if(st.empty())  // i am pushing a closing parenthesis and stack is empty
                {
                    return false;
                }
                if(st.top()!= parents[s[i]]) // if current char's parent not on the top of the stack  
                {
                      return false;
                }
                
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};