class Solution {
    public int maxSubArray(int[] nums) {
        
       
        int max  = nums[0], min = Math.min(nums[0] , 0);
        int currentPrefixSum = nums[0];
       for(int i=1 ; i<nums.length ; i++)
       {
           currentPrefixSum+=nums[i];
           max = Math.max(max,currentPrefixSum-min);
           min = Math.min(min,currentPrefixSum);
       }
        
        return max;
    }
    
    
}

// -2 -1 -4  0  -1  1  2  -3  1 