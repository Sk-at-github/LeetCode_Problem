
//leetcode link -https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    int row = matrix.size();
    int col = matrix[0].size();
        
        int startrow = 0;
        int startcol = col - 1;
        
        while(startrow < row & startcol >=0){
            int  element = matrix[startrow][startcol];
            
            if(element == target){
                return 1;
            }
            else{
                if(element > target){
                    startcol--;
                }
                else{
                    startrow++;
                }
            }
            
        }
        return 0;
        
    }
};
