//Leetcode: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
        int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];
        for(int i=1;i<nums.size();i++){
            currSum = max(nums[i],currSum+nums[i]);
            if(currSum > maxSum) maxSum=currSum;
        }
        
        return maxSum;
    }
};