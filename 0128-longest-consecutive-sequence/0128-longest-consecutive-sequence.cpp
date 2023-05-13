class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sett(nums.begin() , nums.end());
        int maxSequence=0;
        
        for(int num : nums){
            if(!sett.count(num-1))
            {
                int current = num;
                int currentSeq = 1;
                while(sett.count(current+1))
                {
                    currentSeq++;
                    current++;
                }
                maxSequence = max(maxSequence , currentSeq);
            }
        }
        
        return maxSequence;
    }
    
    
};