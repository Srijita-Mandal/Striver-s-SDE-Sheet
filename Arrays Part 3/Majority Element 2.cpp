//Leetcode: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second > n/2){
                return x.first;
            }
        }
        return 0;
    }
};