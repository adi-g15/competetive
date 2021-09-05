// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(auto i=0; i<nums.size();++i) { m[nums[i]] = i; }

        int i=0;
        for(i=0; i<nums.size(); ++i) {
            auto found = m.find(target-nums[i]);
            if( (found != m.end()) && found->second != i  ) {
                break;
            }
        }

        return {
            i,
            static_cast<int>(nums.rend() - find(nums.rbegin(), nums.rend(), target-nums[i]))-1
        };
    }
};
