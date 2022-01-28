// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy(nums.size());
        for(auto i=0; i<nums.size(); ++i) {
            copy[(i+k)%nums.size()] = nums[i];
        }
        swap(nums,copy);
    }
};
