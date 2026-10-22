class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> storey;
        vector<int> storex;
        for(int i = 0 ; i<m ; i++){
            for (int j = 0 ; j<n ; j++){
                if(matrix[i][j]==0){
                    storex.push_back(i);
                    storey.push_back(j);
                }
            }
        }
        for(int el : storex){
            for(int i =0 ; i<n ; i++){
                matrix[el][i]=0;
            }
        }
        for(int el : storey){
            for(int i=0 ; i<m ; i++){
                matrix[i][el]=0;
            }
        }
    }
};