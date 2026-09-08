class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
       vector<int>crntrow(row,0);
        vector<int>crntcol(col,0);

        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j]==0){
                    crntrow[i] = 1;
                    crntcol[j] = 1;
                }
            }
        }
        for(int i = 0 ; i< row ; i++ ){
            if(crntrow[i]==1){
         for(int j = 0 ; j<col ; j++ ){
            matrix[i][j] = 0;
         }
            }
        }
            for(int i = 0 ; i< col ; i++ ){
            if(crntcol[i]==1){
         for(int j = 0 ; j<row ; j++ ){
            matrix[j][i] = 0;
         } 
            }
        }
    }
};