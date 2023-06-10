class NumArray {

     ArrayList<Integer> sumsArr = new ArrayList<Integer>();
    public NumArray(int[] nums) {
       
        sumsArr.add(nums[0]);
        for(int i =1 ; i< nums.length ; i++)
        {
            sumsArr.add(sumsArr.get(i-1)+nums[i]);
        }
    }
    
    public int sumRange(int left, int right) {
        if(left!=0)
        {
             int ans = this.sumsArr.get(right) - this.sumsArr.get(left-1);
             return ans;
        }
        else 
        {
            return sumsArr.get(right);
        }
        
       
      
    }
}

// -2 -2 1 -4 2 1
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */