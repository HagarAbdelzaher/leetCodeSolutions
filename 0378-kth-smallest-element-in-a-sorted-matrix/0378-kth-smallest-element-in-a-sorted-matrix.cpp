class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector <int> v;
        for(int i=0 ; i<rows ; i++)
        {
            for(int j=0 ; j<cols ;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};