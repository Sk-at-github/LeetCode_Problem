
//link -https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int t = nums.size();
        for(int i = 1;i < t; i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[0]<nums[t-1]){
            count++;
        }
        
        
      return count <= 1;  
    }
};
