//Leetcode: Search in a 2d Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m*n;i++){
            if(matrix[i/n][i%n]==target) return true;
        }
        return false;
    }
};