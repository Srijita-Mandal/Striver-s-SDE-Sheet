//Leetcode: https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second>n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};