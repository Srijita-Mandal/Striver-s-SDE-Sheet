//Leedcode: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])==0){
                // mp[nums[i]]++;
                mp[nums[i]]=i;
            }
            else{
                // int index;
                // auto it = find(nums.begin(),nums.end(),target-nums[i]);
                // if(it!=nums.end()){
                //     index=it-nums.begin();
                // }
                v.push_back(i);
                //v.push_back(index);
                v.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return v;
    }
};