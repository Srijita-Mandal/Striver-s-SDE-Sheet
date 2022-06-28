// Leetcode: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
        vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        if(numRows==1){
            return ans;
        }
        v.clear();
        for(int i=1;i<numRows;i++){
            v.push_back(1);
            for(int j=1;j<i;j++){
                int sum=ans[i-1][j-1]+ans[i-1][j];
                v.push_back(sum);
            }
            v.push_back(1);
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};