//Leetcode -https://leetcode.com/problems/spiral-matrix/submissions/

//count<total
//row = matrix.size();
//col = matrix[0].size();


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int firstrow = 0;
        int lastrow = row-1;
        int firstcol = 0;
        int lastcol = col -1;
        
        int count = 0;
        int total = row*col;
        
        while(count < total){
            //1st row
            
        for(int i =firstcol;(count < total)&
i<=lastcol;i++){
            ans.push_back(matrix[firstrow][i]);
            count++;
         }
        firstrow++;
            
            //last col
            for(int i =firstrow;(count < total)&
i<=lastrow;i++){
            ans.push_back(matrix[i][lastcol]);
            count++;
            }
        lastcol--;
            
            //lastrow
            for(int i =lastcol;(count < total)&
i>=firstcol;i--){
            ans.push_back(matrix[lastrow][i]);
            count++;
         }
        lastrow--;
            
            //first col
            
            for(int i = lastrow;(count < total)&
i>=firstrow;i--){
                ans.push_back(matrix[i][firstcol]);
                count++;
            }
        firstcol++;
            
         }
        return ans;
    }
   
};
