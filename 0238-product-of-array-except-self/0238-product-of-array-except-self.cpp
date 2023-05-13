class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1, suffix =1 , len = nums.size();
        vector <int> ans(len,1);
        
        for(int i=0 ; i<len ; i++ )
        {
            ans[i]*=prefix;
            prefix*=nums[i];
        }
        for(int i=len-1 ; i>=0 ; i--)
        {
            ans[i]*=suffix;
            suffix*=nums[i];
        }
        
        return ans;
    }
    
    
};