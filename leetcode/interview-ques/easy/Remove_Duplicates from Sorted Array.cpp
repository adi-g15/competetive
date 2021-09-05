// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)    return nums.size();
        int i=1,j=0;

        for(i=1;i<nums.size();++i) {
            if( nums[i] != nums[i-1] ) {
               ++j;
            }
            nums[j] = nums[i];
        }
        
        return j+1;
    }
};

