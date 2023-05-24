class Solution {
public: 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        
        if(n<3)
            return res;
        
         sort(nums.begin(),nums.end());
        for(int i=0 ; i<n-2;i++)
        {
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i]==nums[i-1])
            {
                  continue;
            }
            
            int l=i+1 , r=n-1;
            
            while (l<r){
                int threeSum = nums[i]+nums[l]+nums[r];
                if(threeSum>0)
                {
                    r--;
                }
                else if(threeSum<0){
                    l++;
                }
                else{
                    res.push_back({nums[i] , nums[l] , nums[r]});
                
               while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    l++;
                    
                    while (l < r && nums[r - 1] == nums[r]) {
                    r--;
                    }
                    r--;
            }
        }
    }
        return res;
    }
};