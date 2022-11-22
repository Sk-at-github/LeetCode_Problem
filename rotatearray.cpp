
// https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int t = nums.size();
        vector<int> arr(t);
    for(int i = 0;i < t;i++){
      arr[(i+k)%t]= nums[i];
    }   
        nums = arr;
    }
};
