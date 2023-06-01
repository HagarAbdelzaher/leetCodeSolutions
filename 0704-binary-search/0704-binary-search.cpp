class Solution {
public:
    int binary_search(vector<int> &arr, int start, int end, int k)
{
    if(start > end)
    {
        return -1;
    }
    int mid = (start+end)/2;
    if(arr[mid] == k)
    {
        return mid;
    }
    else if( arr[mid]<k)
    {
        return binary_search(arr, mid+1 , end, k);
    }
    else {
        return binary_search(arr , start , mid-1 , k);
    }
    
}

    int search(vector<int>& nums,int target) {
        sort(nums.begin() , nums.end());
        int answer = binary_search(nums , 0 , nums.size()-1 ,target);
        return answer;
    }
};



