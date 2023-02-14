class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> temp;
        vector<vector<int>> answer;
        int cols = mat[0].size();
        int rows= mat.size(); 
        int n=rows*cols;
        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++)
            {
               temp.push_back(mat[i][j]);
               if(temp.size()==c)
               {
                   answer.push_back(temp);
                   temp.clear();
               }
            }
        }
        if(n != r*c)
        {
            return mat;
        }
        return answer;
    }
};