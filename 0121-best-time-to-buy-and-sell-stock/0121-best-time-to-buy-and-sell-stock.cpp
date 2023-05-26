class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 7 1 5 3 6 4
        
        // buy -> 7         selling options -> -6 , -2 , -4 , -1 , -3 => -1
        // buy -> 1                         -> 4, 2 , 5,  3  => 5
        // buy -> 5                         -> -2 , 1 , -1 => 1
        // buy -> 3                         -> 3 , 1 => 3
        // buy -> 6                         -> -2 => -2
        
        int l=0 , r=0 , maxP = 0;
        while (r<prices.size())
        {
            if(prices[r]>prices[l])
            {
                maxP = max(maxP , prices[r]-prices[l]);
            }
            else
            {
                l=r;
            }
            r++;
        }
        return maxP;
                    
    }
};