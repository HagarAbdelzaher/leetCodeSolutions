class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector <int> ans;
        int i=0 , j=n-1;
        while (i<j)
        {
            int total = arr[i]+arr[j];
            if(total==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(total<target)
            {
                i++;
            }
            else if (total>target)
            {
                j--;
            }
        }
        return ans;
    }
};