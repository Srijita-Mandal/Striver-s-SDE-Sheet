//Leetcode: https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> a;
        int count = 1, i = 0;
        if(s.length() == 0){
            return 0;
        }
        for(int j = 0; j < s.length(); j++){
        char c = s[j];
        if(a.count(c) == 0){
            a.insert(c);
            int size = a.size();
            count = max(count, size);
        }else{
            while(i<j){
                if(s[i] == c){
                    i++;
                    break;
                }
 
                a.erase(s[i]);
                i++;
            }
        }    
    }
        return count;
    }
};