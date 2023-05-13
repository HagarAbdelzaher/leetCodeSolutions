class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num :nums)
        {
            mp[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto& entry :mp){
            pq.push({entry.second,entry.first});
        }
        vector<int>ans;
        for(int i=0 ; i<k ; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};