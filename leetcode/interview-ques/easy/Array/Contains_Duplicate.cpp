// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> present;
        for(auto& i: nums) {
            if( ! present.insert(i).second ) return true;
        }
        return false;
    }
};
