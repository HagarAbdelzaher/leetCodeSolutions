class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector<int>nums;
        int x = matrix.size();
        int y = matrix[0].size();
        for(int i=0 ; i<x; i++)
        {
            for(int j=0 ; j<y ; j++)
            {
                nums.push_back(matrix[i][j]);
            }
        }
        
        int l = 0 , r= nums.size()-1;
        
        while (l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            else if(nums[mid]<target){
                l = mid+1;
            }
            else 
            {
                r = mid-1;
            }
        }
        return false;
        
    }
};