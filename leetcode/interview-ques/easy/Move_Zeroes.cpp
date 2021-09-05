// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;

        for(i=0;i<nums.size();++i) {
            nums[j] = nums[i];
            if( nums[i] != 0 ) {
                ++j;
            }
        }
        while(j < nums.size()) {
            nums[j] = 0;
            ++j;
        }
    }
};
